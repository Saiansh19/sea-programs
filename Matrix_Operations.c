#include<stdio.h>
int main()
{
        int row, clmn;
        printf("Enter number of rows and columns of the matrix\n");
        scanf("%d%d", &row, &clmn);

        int a[row][clmn],trps[clmn][row], mul[row][clmn];

        printf("Enter values");
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<clmn; j++)
        {
            scanf("%d", &a[i][j]);
            trps[j][i]= a[i][j];
        }
    }
    printf("Multiplied matrix:\n");
    for (int k=0; k<row; k++)
    {
        for (int l=0; l<clmn; l++)
        {
            mul[k][l]= a[k][l]*trps[k][l];
            printf("    %d  ", mul[k][l]);
        }
    printf("\n");
    }
}