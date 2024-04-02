#include <stdio.h>

int i=0;
int j=0;
int k=0;
int sum=0;

void matrix_multiple(int A[3][3], int B[3][3], int C[3][3]);

int main()
{
    int A[3][3], B[3][3], C[3][3];
    printf("Enter elements of the first matrix : ");
    for(int n=0; n<3; n++)
        for(int m=0; m<3; m++)
            scanf("%d",&A[n][m]);

    printf("Enter elements of the second matrix : ");
    for(int n=0; n<3; n++)
        for(int m=0; m<3; m++)
            scanf("%d",&B[n][m]);

    matrix_multiple(A,B,C);

    for(int n=0; n<3; n++)
     {
        for(int m=0; m<3; m++)
            printf("%d",C[n][m]);

         printf("\n");
     }    
    

    return 0;
}


void matrix_multiple(int A[3][3], int B[3][3], int C[3][3])
{
    if(i<3)
    {
        if(j<3)
        {
            if(k<3)
            {
                sum += A[i][k] * B[k][j];
                k++;
                matrix_multiple(A,B,C);
            }
        
                C[i][j] = sum;
                sum = 0;
                j++;
                k=0;
                matrix_multiple(A,B,C);
        }
        i++;
        j=0;
        matrix_multiple(A,B,C);
    }
    
}