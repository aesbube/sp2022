#include <stdio.h>
int sum_pos(int n, int ind, int *niza){
    int sum=0;
    if(ind>n) return 0;
    else{
    for(int i=ind; i<n; i++){
        sum+=*(niza+i);
    }
    return sum;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int *niza;
    for(int i=0; i<n; i++){
        scanf("%d", (niza+i));
    }
    int ind; scanf("%d", &ind);
    printf("%d", sum_pos(n, ind, niza));
}