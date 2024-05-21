#include <stdio.h>
void square() {
    int m;
    int sum=0;
    for(int i=1; i<=10; i++) {
        m=i*i*i;
        sum=sum+m;
    }
    printf("Sum = %d", sum);
}
int main() {
    printf("This is a function to print the sum of the squares of the first 10 natural numbers.\n\n");
    square();
    printf("\n\nThank you.");
    return 0;
}