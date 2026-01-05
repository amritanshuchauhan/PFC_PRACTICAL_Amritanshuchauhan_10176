#include <stdio.h>

int main() {
    //Amritanshu chauhan
    //ERP 10176
    //SEC D
    int a, b, c, ch;
    printf("Enter a number: ");
    scanf("%d", &a);

    (a % 2 == 0) ? printf("Even\n") : printf("Odd\n");

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("Max = %d\n", a);
    else if (b > c)
        printf("Max = %d\n", b);
    else
        printf("Max = %d\n", c);

    printf("1.Add 2.Sub 3.Mul 4.Div\n");
    scanf("%d", &ch);

    switch (ch) {
        case 1: printf("Sum = %d", a + b); break;
        case 2: printf("Sub = %d", a - b); break;
        case 3: printf("Mul = %d", a * b); break;
        case 4: printf("Div = %d", a / b); break;
        default: printf("Invalid");
    }

    return 0;
}

//OUTPUT
//Odd
//Maximum = 45
//A is Maximum
//15