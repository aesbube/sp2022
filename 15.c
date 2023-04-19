#include <stdio.h>
int poramnet(int a){
    if(a==0) return 0;
    int ost = a%10;
    if(ost==9) ost=7;
    return 10*poramnet(a/10) + ost;
}
int main(){
    int a, i=0;
    int z[100];
    while(scanf("%d", &a)){
        z[i]=poramnet(a);
        i++;
    }
    
    for (int j = 0; j < i; j++)
    {
        for (int k = j+1; k < i; k++)
        {
            int pom;
            if(z[j]>z[k]){
                pom = z[j];
                z[j] = z[k];
                z[k] = pom;
            }
        }
    for (int j = 0; j < i; j++)
    {
        printf("%d ", z[j]);
    }   
        
    }
    if(i<5)
    for (int j = 0; j < i; j++)
    {
        printf("%d ", z[j]);
    }
    else
    for (int j = 0; j < 5; j++)
    {
        printf("%d ", z[j]);
    }
    
}
