#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile() {
  FILE *f = fopen("text.txt", "w");
  char c;
  while((c = getchar()) != '#') {
    fputc(c, f);
  }
  fclose(f);
}
int samoglaska(char a){
    if(tolower(a)=='a'||tolower(a)=='e'||tolower(a)=='i'||tolower(a)=='o'||tolower(a)=='u') return 1;
    return 0;
}
int main() {
    
    writeToFile();
    FILE *f;
    if(!(f = fopen("text.txt", "r"))){
        printf("Error");
    }
    int br = 0;
    char letter, prev = 'z';
    while((letter = fgetc(f))!=EOF){
        if(samoglaska(letter)){
            if(samoglaska(prev)){
                printf("%c%c\n", tolower(prev), tolower(letter));
                br++;
            }
        }
        prev = letter;
    }
    printf("%d", br);
    fclose(f);
}
