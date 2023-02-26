// Во датотеката podatoci.txt се запишани редови со низи од знаци 
// (секој не подолг од 80 знаци).

// Од стандарден влез се читаат два знака z1 и z2. 
// Да се напише програма со која на стандарден излез ќе се испечатат 
// поднизите од секој ред од датотеката составени од знаците што се наоѓаат меѓу z1 и z2
//  (без нив). Секоја подниза се печати во нов ред.

// Се смета дека секој ред од датотеката точно еднаш ги содржи знаците 
// z1 и z2, знакот z1 секогаш се наоѓа пред знакот z2, а меѓу z1 и z2 секогаш има барем еден знак.

#include <stdio.h>
#include <ctype.h>
#include <string.h>
void wtf() {
    FILE *f = fopen("podatoci.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    FILE *f;
    if(!(f = fopen("podatoci.txt", "r"))){
        printf("Error");
        // exit(-1);
    }
    char z1, z2;
    //scanf("%c %c", &z1, &z2);
    if(scanf(" %c %c", &z1, &z2)!=2){
        z2=z1;
        z1=' ';
    }
    char red[81];
    while((fgets(red, 81, f))!=NULL){
        int i;
        int pocetok, kraj, flag=1;
        for(i = 0; i < strlen(red); i++){
        if(red[i]==z1&&flag){
            pocetok = i;
            flag=0;
        }
        else if(red[i]==z2){
            kraj = i;
        }
            
        }
        for (int a = pocetok+1; a < kraj; a++)
        {
            printf("%c", red[a]);
            
        }
        printf("\n");
   
    }
    fclose(f);
    return 0;
}
