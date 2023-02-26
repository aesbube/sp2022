#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10000

//ne menuvaj!
void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{
    wtf();
    
    FILE *f;
    if(!(f = fopen("broevi.txt", "r"))){
        printf("Error");
    }
    char br[MAX];
    while((fgets(br, MAX, f))!=NULL){
        char *red = br;
        int max = 0;
        int maxDigit = 0;
        int n = atoi(red);
        for (int i = 0; i < n; i++)
        {
            while(*red!=' ') red++;
            int num = atoi(red);
            printf("%d\n ", num);
            int fullnum = atoi(red);
            while(num>=10) num/=10;
            if(num>maxDigit){
                maxDigit = num;
                max = fullnum;
            }
            red++;
        }
        if(max!=0) printf("%d\n", max);
    }
	
}