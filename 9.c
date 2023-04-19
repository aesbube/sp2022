#include <stdio.h>
int main(){
    char n;
    int zbir=0, broj, dekaden;
    while(scanf("%c", &n)){
        if(n=='.'){
            break;
        }
        else{
            if(n>='A' && n<='F'){
                zbir+=n-'A'+10;
            }
            else if(n>='a' && n<='f'){
                zbir+=n-'a'+10;
            }
            else if(n>='0' && n<='9'){
                zbir+=n-'0';
            }
        }
    }
    if(zbir%16==0){
        if(zbir%10==6 && zbir%100/10==1){
            printf("Poln pogodok");
        }else
        printf("Pogodok");
    }
    else
        printf("%d", zbir);
}
