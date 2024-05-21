#include <stdio.h>
#include <string.h>
void string(char s[]) {
    int l=strlen(s);
    printf("Length :- %d", l);
}
int main() {
    printf("This is a function to print the length of a given string.\n\n");
    char s[50];
    fgets(s,50,stdin);
    string(s);
    printf("\n\nThank you.");
    return 0;
}