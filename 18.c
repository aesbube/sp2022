#include <stdio.h>
int main(){
    int n; scanf("%d", &n);
    float mat[100][100];
    float x=0, y=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%f", &mat[i][j]);
        }
    }
    float sum1=0, sum2=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i>j) sum1+=mat[i][j];
            if(i+j>n-1) sum2+=mat[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(n%2==0){
                if(i==j) mat[i][j]=sum1;
                else if(i+j==n-1) mat[i][j]=sum2;
                else mat[i][j]=0;
            }
            else{
                if(i==j && i!=(n/2) && j!=(n/2)) mat[i][j]=sum1;
                else if(i+j==n-1 && i!=(n/2) && j!=(n/2)) mat[i][j]=sum2;
                else if(i==j && i==(n/2) && j==(n/2)) mat[i][j]=sum1+sum2;
                else mat[i][j]=0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.1f ", mat[i][j]);
        }
        printf("\n");
    }
}
