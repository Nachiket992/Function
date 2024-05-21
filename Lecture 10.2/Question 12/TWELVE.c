#include <stdio.h>
int factorial(int a) {
    int sum=1;
    for(int i=1; i<=a; i++) {
        sum=sum*i;
    }
    return sum;
}
int main() {
    printf("This is a function to return the factorial of a given number.\n\n");
    int a;
    printf("Enter the number :- ");
    scanf("%d", &a);
    printf("The square is :- %d", factorial(a));
    printf("\n\nThank you.");
    return 0;
}