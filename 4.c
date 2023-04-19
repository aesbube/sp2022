#include <stdio.h>
#define MAX 100
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int matrixx[MAX][MAX];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrixx[i][j]);
        } 
    }
    int poz1, poz2;
    int k1=0, k2=0, k3=0, k4=0;
    scanf("%d %d", &poz1, &poz2);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i<poz1){
                if(j<poz2) k2+=matrixx[i][j];
                else k1+=matrixx[i][j];
            }
            else if (i>=poz1){
                if(j<poz2) k3+=matrixx[i][j];
                else k4+=matrixx[i][j];
            }
        }
    }
    printf("%d %d %d %d", k1, k2, k3, k4);
    return 0;
}
