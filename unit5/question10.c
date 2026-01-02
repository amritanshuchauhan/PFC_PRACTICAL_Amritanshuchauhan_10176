#include <stdio.h>

int main() {
    //Amritanshu chauhan
    //ERP-10176
    //sec-D
    int a[2][2], i, j, sum = 0;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            sum += a[i][j];

    printf("Sum = %d", sum);
    return 0;
}

//OUTPUT

//Sum = 15