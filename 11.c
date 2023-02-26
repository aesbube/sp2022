#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
int main() {
    wtf();
    FILE *f;
    if(!(f = fopen("input.txt", "r"))){
        printf("Error");
        exit(-1);
    }
    char a[101];
    while((fgets(a, 101, f))!=NULL){
        char pom[101];
        int brojac=0;
        int j=0;
        for(int i=0; i<strlen(a); i++){
            if(isdigit(a[i])){
                brojac++;
                pom[j]=a[i];
                j++;
            }
        }
        pom[brojac]='\0';
        char temp;
        for (int i = 0; i < brojac; i++) {     
            for (int j = i+1; j < brojac; j++) {     
                if(pom[i] > pom[j]) {    
                    temp = pom[i];    
                    pom[i] = pom[j];    
                    pom[j] = temp;    
                }     
            }     
        }  
        printf("%d:", brojac);
        for(int i=0; i<brojac; i++) printf("%c", pom[i]);
        printf("\n");
    }
    fclose(f);
    return 0;
}
