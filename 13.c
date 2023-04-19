# include <stdio.h>
int main(){
    int brX;
    scanf("%d", &brX);
    int m, n;
    scanf("%d %d", &m, &n);
    int z[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &z[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        int zbir=0;
        for (int j = 0; j < n; j++)
        {
            zbir+=z[i][j];
        }
        for (int k = 0; k < n; k++)
        {
            if(zbir>brX) z[i][k]=1;
            else if(zbir<brX) z[i][k]=-1;
            else z[i][k]=0;
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
