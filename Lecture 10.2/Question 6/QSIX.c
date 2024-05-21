#include <stdio.h>
void sum(int a, int b) {
    printf("Sum = %c", a+b);
}
int main() {
    int a, b;
    printf("This is a function to print the sum of two given numbers.\n\n");
    printf("Enter the first number :- ");
    scanf("%d", &a);
    printf("Enter the second number :- ");
    scanf("%d", &b);
    sum(a, b);
    printf("\n\nThank you.");
    return 0;
}