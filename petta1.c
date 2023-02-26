#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// ne menuvaj ovde
void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}
int main(){
    wf();
    FILE *f;
    if(!(f=fopen("livce.txt", "r"))){
        printf("Error");
        return 0;
    }
    int suma;
    char shifra[10], maxshifra[10];
    int tip, maxtip;
    double koeficient, maxkoeficient, vkupno=1;
    fscanf(f, "%d", &suma);
    while((fscanf(f, "%s %d %lf", shifra, &tip, &koeficient))!=EOF){
        if(koeficient>maxkoeficient){
            strcpy(maxshifra, shifra);
            maxtip = tip;
            maxkoeficient = koeficient;
        }
        vkupno*=koeficient;
    }
    printf("%s %d %.2lf\n %.2lf", maxshifra, maxtip, maxkoeficient, vkupno*suma);
    fclose(f);

}