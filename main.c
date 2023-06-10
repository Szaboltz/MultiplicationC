// Algorithm that shows the product and the potentiation between two int numbers

#include <stdio.h>
#include <stdlib.h>

void main(){
    int num1, num2, r;
    printf("Write the fist number: ");
    scanf("%d", &num1);
    printf("Write the second number: ");
    scanf("%d", &num2);

    r = num1 * num2;
    printf("The product of multiplication is: %d\n", r);

    r *= r;
    printf("The product's potentiation is: %d", r);
}

