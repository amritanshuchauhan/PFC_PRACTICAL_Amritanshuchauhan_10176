#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    //Amritanshu chauhan
    //ERP-10176
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("After swapping: %d %d", x, y);

    return 0;
}



//OUTPUT
//After swapping: 10 5