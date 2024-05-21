#include <stdio.h>
int eo(int a) {
    if(a%2==0) {
        printf("This number is even.");
    }
    else{
        printf("This number is odd.");
    }
    return;
}
int main() {
    printf("This is a function to return whether a given number is even or odd.\n\n");
    int a;
    printf("Enter the number :- ");
    scanf("%d", &a);
    eo(a);
    return 0;
}