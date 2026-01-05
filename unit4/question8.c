#include <stdio.h>

    

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    //Amritanshu chauhan
    //ERP-10176
    //sec-D
    int n = 5, a = 3, b = 7, i, flag = 1;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    if (flag) printf("Prime\n");
    else printf("Not Prime\n");

    printf("Factorial = %d\n", factorial(n));

    swap(&a, &b);
    printf("Swapped: %d %d", a, b);

    return 0;
}


//OUTPUT