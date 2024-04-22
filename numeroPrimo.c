#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int i, num, j;

    //asks for a number until it is positive and greater then 0
    do
    {
        printf("Digite um numero inteiro e positivo para saber se ele e primo ou nao\n");
        scanf("%d", &num);
    } while (num <= 0);
    
    // Does the division with the number that the user choose and all of the numbers before it, then if it adds 1 to the variable J
    j = 0;
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            j++;
        }
    }
    
    // Checks if the variablle J has more then two pointa and say if the number is a prime number or not
    if (j == 2) {
        printf("O seu numero e primo");
    } else {
        printf("O seu numero nao e primo");
    }
}