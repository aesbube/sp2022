    #include <stdio.h>
    #define MAX 100
    int main(){
        int m, n;
        scanf("%d %d", &n, &m);
        int matrica [MAX][MAX];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &matrica[i][j]);
            } 
        }
        int redovi=0, koloni=0;
        for (int i = 0; i < n; i++)
        {
            int kecovi=0;
            for (int j = 0; j < m; j++)
            {
                kecovi+=matrica[i][j];
                
                if(kecovi>2){
                    redovi++;
                    break;
                }
                if(matrica[i][j]==0) kecovi=0;
            }   
        }
        for (int i = 0; i < m; i++)
        {
            int kecovi=0;
            for (int j = 0; j < n; j++)
            {
                kecovi+=matrica[j][i];
                
                if(kecovi>2){
                    koloni++;
                    break;
                }
                if(matrica[j][i]==0) kecovi=0;  
            }   
        }
        int vk = redovi + koloni;        
                
        printf("%d", vk);
    }  