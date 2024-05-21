#include <stdio.h>
#include <string.h>
void string(char s[]) {
    char d[50];
    int p=0;
    for(int i=strlen(s)-1; s[i]!='\0'; i--) {
        d[p]=s[i];
        p++;
    }
    for(int j=0; d[j]!='\0'; j++) {
        printf("%c", d[j]);
    }
}
int main() {
    printf("This is a function to print the reverse of a given string.\n\n");
    char s[50];
    fgets(s,50,stdin);
    string(s);
    printf("\n\nThank you.");
    return 0;
}