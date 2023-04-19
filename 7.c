#include <stdio.h>
#include <math.h>
int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    float matrica[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%f", &matrica[i][j]);
        }
    }
    float niza[m];
    //int sum=0;
    for (int i = 0; i < m; i++)
    {
        float sum=0;
        float ar=0;
        for (int j = 0; j < n; j++)
        {
            sum+=matrica[i][j];
        }
        ar=sum*1.0/n;
        float max;
        for (int k = 1; k < n; k++)
        {
            max=(matrica[i][0]-ar*1.0);
            if(max<fabs(matrica[i][k]-ar*1.0)){
                max=fabs(matrica[i][k]-ar*1.0);
                niza[i]=matrica[i][k];
            }
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        printf("%.0f ", niza[i]);
    }
    
    
    
}
