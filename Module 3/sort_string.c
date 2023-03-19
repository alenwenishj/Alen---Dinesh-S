#include<stdio.h>
#include<ctype.h>
#include<string.h>

void sort(char str[],int start,int end)
{
    char temp;
    for(int i=0;i<end;i++)
    {
        for(int j=start;j<end-i-1;j++)
        {
            if(str[j]>str[j+1])
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
}

int main()
{
    char str[100];
    scanf("%[^\n]",str);
    int i=0;
    while(i<strlen(str))
    {
        if(isdigit(str[i]))
        {
            int start=i;
            while(!isalpha(str[i]))
            {
                if(isdigit(str[i]))
                {
                    i++;
                }
                else
                    break;
            }
            int end=i;
            sort(str,start,end);
        }
        else if(isalpha(str[i]))
        {
            int start=i;
            while(!isdigit(str[i]))
            {
                if(isalpha(str[i]))
                {
                    i++;
                }
                else
                    break;
            }
            int end=i;
            sort(str,start,end);
        }
    }
    printf("%s",str);
    return 0;
}
