#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,r,c;
    printf("Enter number of rows : ");
    scanf("%d ",&r);
    printf("enter number of colums");
    scanf("%d",&c);
    
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\nEnter element : ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nOriginal array is : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");

    }
    printf("\nTranspose array is : \n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",arr[j][i]);
        }
        printf("\n");

    }
}