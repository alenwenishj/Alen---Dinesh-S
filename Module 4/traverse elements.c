#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *ptr;
    for(ptr=arr;ptr<arr+n;ptr++)
    {
        printf("%d ",*ptr);
    }
    return 0;
}
