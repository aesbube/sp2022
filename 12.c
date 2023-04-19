#include <stdio.h>
int BrojPozitivni(int niza[], int n){
    if(niza[n]>0) return 1+ BrojPozitivni(niza, n-1);
    else return 0+ BrojPozitivni(niza, n-1);
}
int main(){
    int n; scanf("%d", &n);
    int niza[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &niza[i]);
    }
    printf("%d", BrojPozitivni(niza, n));
}
