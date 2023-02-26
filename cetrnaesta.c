#include <stdio.h>
int main(){
    int n; scanf("%d", &n);
    int z[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n; j++)
        {
            scanf("%d", &z[i][j]);
        }
       
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n; j++)
        {
            printf("%d ", z[i][j]);
        } 
        printf("\n");
    }
            printf("\n");
    int b[2*n][n];
    for (int i = n; i < n; i++)
    {
        for (int j = n; j < 2*n; j++)
        {
            if(j<n) {b[i][j]=z[i][j];}
            if(j>=n) {b[i+n][j-n]=z[i][j];}
        }
    }
    for (int i = 0; i < 2*n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    
}