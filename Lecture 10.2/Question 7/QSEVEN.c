#include <stdio.h>
#include <string.h>
void string(char s[]) {
    for(int i=0; s[i]!='\0'; i++) {
        printf("%c", s[i]);
    }
}
int main() {
    printf("This is a function to print the characters of a given string.\n\n");
    char s[50];
    fgets(s,50,stdin);
    string(s);
    printf("\nThank you.");
    return 0;
}