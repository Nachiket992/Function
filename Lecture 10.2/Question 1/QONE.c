#include <stdio.h>
void odd() {
    for(int i=1; i<20; i++) {
        if(i%2!=0) {
            printf("\t%d\n", i);
        }
    }
}
int main() {
    printf("This is a function to print the first 10 odd numbers.\n\n");
    odd();
    printf("\nThank you.");
    return 0;
}