#include <stdio.h>
int maks(int n){
    if(n<10) return n;
    int ost = n%10;
    int a = maks(n/10);
    if(ost>a) return ost;
    else return a;
}
int main(){
    int n;
    while(scanf("%d", &n)){
        printf("%d \n", maks(n));
    }
}
