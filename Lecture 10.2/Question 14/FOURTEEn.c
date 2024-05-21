#include <stdio.h>
int sum() {
    int sum=0;
    for(int i=0; i<=10; i++) {
        sum=sum+i;
    }
    return sum;
}
int main() {
    printf("This is a function to return the sum of the first 10 natural numbers.\n\n");
    printf("This is the sum of first 10 natural numbers :- %d", sum());
    printf("\n\nThank you.");
    return 0;
}