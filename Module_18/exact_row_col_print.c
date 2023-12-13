#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int ar[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int e;
    scanf("%d",&e);
    
    //exact row
    
    // for(int j=0;j<col;j++)
    // {
    //     printf("%d ",ar[e][j]);
    // }

    //exact column
    
    for(int j=0;j<row;j++)
    {
        printf("%d ",ar[j][e]);
    }
    return 0;
}