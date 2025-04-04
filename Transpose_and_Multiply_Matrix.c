#include<stdio.h>
int main()
{
    int rw,clm;
    printf("Enter the number of rows and columns\n");
    scanf("%d  %d", &rw, &clm);

    int a[rw][clm], tra[clm][rw], mult[rw][clm];
    printf("Enter values \n");
    for (int i=0; i<rw; i++)
    {
        for (int j=0; j<clm; j++)
        {
            scanf("%d", &a[i][j]);
            tra[j][i]=a[i][j];
        }
    }
    printf("Multiplied Matrix : \n");
    for (int k=0; k<rw; k++)
    {
        for (int l=0; l<clm; l++)
        {
            mult[k][l]=a[k][l]*tra[k][l];
            printf("%d", mult[k][l]);
        }
        printf("\n");
    }
}