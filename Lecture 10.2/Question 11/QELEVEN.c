#include <stdio.h>
int square(int a) {
    return a*a*a;
}
int main() {
    printf("This is a function to return the square of a given number.\n\n");
    int a;
    printf("Enter the number :- ");
    scanf("%d", &a);
    printf("The square is :- %d", square(a));
    printf("\n\nThank you.");
    return 0;
}