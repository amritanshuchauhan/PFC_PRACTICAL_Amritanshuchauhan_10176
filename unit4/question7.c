#include <stdio.h>

int square(int x) {
    return x * x;
}

int main() {
    //Amritanshu chauhan
    //ERP-10176
    //sec-D
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    printf("Square = %d", square(5));
    return 0;
}

//OUTPUT
//Prime Number
