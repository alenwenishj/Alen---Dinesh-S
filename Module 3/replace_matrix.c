#include <stdio.h>

int main()
{
    int n,m;
    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);
    int mat[n][n];
    printf("Enter the matrix elements:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]==m)
            {
                mat[i][j]=mat[i-1][j];
            }
        }
    }
    printf("\nOutput:\n\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
