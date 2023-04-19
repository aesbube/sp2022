#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// ne menuvaj ovde
void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
int twodigits(char niza[]){
    int br = 0;
    for(int i=0;i<100;i++){
        if(niza[i] == '\0') break;
        if(isdigit(niza[i])){
            br++;
        }
    }
    return br>=2;
}
int main() {
    wtf();
    FILE *f;
	if(!(f = fopen("dat.txt", "r"))){
        printf("Error");
        return 0;
    }
    char a[101];
    int max;
    int red = 0, i = 0;
    while(fgets(a, 101, f)!=NULL){
        int n = strlen(a);
        if(!twodigits(a)) n == 0;
        if(n>max){
            max = n;
            red = i;
        }
        red++;
    }
    fclose(f);
    if(!(f = fopen("dat.txt", "r"))){
        printf("Error");
        return 0;
    }
    int redica = 0;
    while(fgets(a, 101, f)!=NULL){
        if(redica == red){
            char pocetok, kraj;
            for(int i=0; i<strlen(a); i++){
                if(isdigit(a[i])){
                    pocetok = i;
                }
                break;
            }
            for(int i=strlen(a)-1; i>=0; i--){
                if(isdigit(a[i])){
                    kraj = i;
                }
                break;
            }
        for(int z=pocetok; z<=kraj; z++){
            printf("%c", a[i]);
        }
        }
        redica++;
    }
    
    
    

}
