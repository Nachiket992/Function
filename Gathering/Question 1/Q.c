#include <stdio.h>
int addition(int a, int b) {
    int addition=a+b;
    return addition;
}
int subtraction(int a, int b) {
    int subtraction=a-b;
    return subtraction;
}
int multiplication(int a, int b) {
    int multiplication=a*b;
    return multiplication;
}
float division(int a, int b) {
    float division=a/b;
    return division;
}
int modulo(int a, int b) {
    int modulo=a%b;
    return modulo;
}
int main () {
    int n, a, b;
    backtotop :
    repeat :
    printf("\nPress 1 for +\n");
    printf("press 2 for -\n");
    printf("press 3 for *\n");
    printf("press 4 for /\n");
    printf("press 5 for %\n");
    printf("press 6 for the exit\n");
    printf("\nEnter your choice :- ");
    scanf("%d", &n);
    while(n!=6) {
        switch (n) {
        case 1 : printf("Enter the first number :- ");
                 scanf("%d", &a);
                 printf("Enter the second nuber :- ");
                 scanf("%d", &b);
                 printf("The addition of %d and %d is %d.\n", a, b, addition(a, b));
                 goto repeat;
        case 2 : printf("Enter the first number :- ");
                 scanf("%d", &a);
                 printf("Enter the second nuber :- ");
                 scanf("%d", &b);
                 printf("The subtraction of %d and %d is %d.\n", a, b, subtraction(a, b));
                 goto repeat;
        case 3 : printf("Enter the first number :- ");
                 scanf("%d", &a);
                 printf("Enter the second nuber :- ");
                 scanf("%d", &b);
                 printf("The multiplication of %d and %d is %d.\n", a, b, multiplication(a, b));
                 goto repeat;
        case 4 : printf("* NOTE :-\n\n");
                 printf("\t1. The first number must be larger then the second number.\n\n");
                 printf("\t2. Both the values must be larger then 0.\n\n");
                 reenter_both :
                 reenter_first :
                 reenter_second :
                 printf("Enter the first number :- ");
                 scanf("%d", &a);
                 if(a<=0) {
                     printf("\n* The entered first value '%d' is invalid.\n\n", a);
                     printf("* Please, Enter values according to instructions(Read the 'NOTE')\n\n");
                     goto reenter_first;
                 }
                 printf("Enter the second nuber :- ");
                 scanf("%d", &b);
                 if(b<=0) {
                     printf("\n* The entered second value '%d' is invalid.\n\n", b);
                     printf("* Please, Enter values according to instructions(Read the 'NOTE')\n\n");
                     goto reenter_second;
                 }
                 if(b>a) {
                     printf("\n* The entered values are invalid because the second value is larger then the first value.\n\n");
                     printf("* Please, Enter values according to instructions(Read the 'NOTE')\n\n");
                     goto reenter_both;
                 }
                 printf("The Division of %d and %d is %.2f.\n", a, b, division(a, b));
                 goto repeat;
        case 5 : printf("* NOTE :-\n\n");
                 printf("\t1. The first number must be larger then the second number.\n\n");
                 printf("\t2. Both the values must be larger then 0.\n\n");
                 value_both :
                 value_first :
                 value_second :
                 printf("Enter the first number :- ");
                 scanf("%d", &a);
                 if(a<=0) {
                     printf("\n* The entered first value '%d' is invalid.\n\n", a);
                     printf("* Please, Enter values according to instructions(Read the 'NOTE')\n\n");
                     goto value_first;
                 }
                 printf("Enter the second nuber :- ");
                 scanf("%d", &b);
                 if(b<=0) {
                     printf("\n* The entered second value '%d' is invalid.\n\n", b);
                     printf("* Please, Enter values according to instructions(Read the 'NOTE')\n\n");
                     goto value_second;
                 }
                 if(b>a) {
                     printf("\n* The entered values are invalid because the second value is larger then the first value.\n\n");
                     printf("* Please, Enter values according to instructions(Read the 'NOTE')\n\n");
                     goto value_both;
                 }
                 printf("The Modulo of %d and %d is %d.\n", a, b, modulo(a, b));
                 goto repeat;
        default : printf("\nThis program can't able to run this type of operations.\n\n");
                  printf("This programe is only able run this following operations.\n");
                  goto backtotop;
    }
    }
    printf("\nThank you.");
}