#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[50];
    printf("Enter a string:");
    scanf("%s",str);
    printf("\nWithout using Libraries\n\n");
    int i=0,count=0,lower=0,upper=0,num=0,special=0;
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
            lower++;
        else if(str[i]>='A' && str[i]<='Z')
            upper++;
        else if(str[i]>=48 && str[i]<=57)
            num++;
        else
            special++;
        count++;
        i++;
    }
    if(count>8)
        printf("The string should be of length 8\n");
    if(lower==0)
        printf("The string must contain atleast one lowercase\n");
    if(upper==0)
        printf("The string must contain atleast one uppercase\n");
    if(special==0)
        printf("The string must contain atleast one special character\n");
    if(num==0)
        printf("The string must contain atleast one number\n");
    printf("\n\nUsing Libraries\n\n");
    if(strlen(str)>8)
        printf("The string should be of length 8\n");
    lower=0;upper=0;num=0;special=0;
    i=0;
    while(str[i]!='\0')
    {
        if(islower(str[i]))
            lower++;
        else if(isupper(str[i]))
            upper++;
        else if(isdigit(str[i]))
            num++;
        else
            special++;
        i++;
    }
    if(lower==0)
        printf("The string must contain atleast one lowercase\n");
    if(upper==0)
        printf("The string must contain atleast one uppercase\n");
    if(special==0)
        printf("The string must contain atleast one special character\n");
    if(num==0)
        printf("The string must contain atleast one number\n");
    
    return 0;
}
