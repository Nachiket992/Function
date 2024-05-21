#include <stdio.h>
void factorial() {
    int sum=1;
    for(int i=1; i<=5; i++) {
        sum*=i;
    }
    printf("5! = %d", sum);
}
int main() {
    printf("This is a function to print the factorial of numbers from 1 to 5.\n\n");
    factorial();
    printf("\n\nThank you.");
    return 0;
}