#include <stdio.h>

int main() {
    //Amritanshu chauhan
    //ERP-10176
    int i, n, sum = 0;

    printf("Enter limit: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 != 0)
            continue;
        sum += i;
    }

    printf("Sum of even numbers = %d", sum);

    return 0;
}


//OUTPUT
//Sum of even numbers = 30