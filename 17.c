#include <stdio.h>
#include <math.h>
int main(){
    int m, n;
    int z[100][100];
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &z[i][j]);
        }
    }
    if(n%2==0)
    for (int i = 0; i < m; i++)
    {
        int sum1=0; int sum2=0;
        for (int j = 0; j < n; j++)
        {
            if(j<n/2) sum1+=z[i][j];
            if(j>=n/2) sum2+=z[i][j];
            
        }
        z[i][n]=fabs(sum1-sum2);
        z[i][n-1]=fabs(sum1-sum2);
    }
    else{
    for (int i = 0; i < m; i++)
    {
        int sum1=0; int sum2=0;
        for (int j = 0; j < n; j++)
        {
            if(j<n/2) sum1+=z[i][j];
            if(j>=n/2) sum2+=z[i][j];
            
        }
        z[i][n/2]=fabs(sum1-sum2);
    }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", z[i][j]);
        }
        printf("\n");
    }
    
}
