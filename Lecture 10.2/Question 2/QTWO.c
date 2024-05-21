#include <stdio.h>
void matrix() {
    for(int i=1; i<=3; i++) {
        for(int j=1; j<=3; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
int main() {
    printf("This is a function to print a simple 3x3 matrix of asterisks.\n\n");
    matrix();
    printf("\nThank you.");
    return 0;
}