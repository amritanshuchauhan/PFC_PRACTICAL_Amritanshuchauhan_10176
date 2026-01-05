#include <stdio.h>

int main() {
    //Amritanshu chauhan
    //ERP-10176
    //sec-D
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", a + b);

    if (a > b)
        printf("Largest = %d\n", a);
    else
        printf("Largest = %d\n", b);

    return 0;
}


//OUTPUT
//enter two numbers:2
//3
//sum =5
//largest = 3