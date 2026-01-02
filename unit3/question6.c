#include <stdio.h>

int main() {
    int i, n, sum = 0;

    for (i = 1; i <= 10; i++)
        printf("%d ", i);

    printf("\nEnter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        sum += i;

    printf("Sum = %d\n", sum);

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 9) break;
        printf("%d ", i);
    }

    return 0;
}

//OUTPUT
//Sum = 15