#include <stdio.h>
#include <string.h>
#include <ctype.h>
void pomestuvanje(char* niza, int x){
    if(*niza == '\0') return;
    if(isalpha(*niza)){
        int z= *niza + x;
        if(isupper(*niza)){
            if(z>'Z') z=z%'Z' + 'A' - 1;
        }
        if(islower(*niza)){
            if(z>'z') z=z%'z' + 'a' - 1;
        }
        *niza=z;
    }
    pomestuvanje(niza+1, x);
}
int main(){
    int n, x; scanf("%d%d\n", &n, &x);
    //char niza[80];
    for(int i=0; i<n; i++){
        char *niza;
        gets(niza);
        pomestuvanje(niza, x);
        printf("%s", niza);
    }
}