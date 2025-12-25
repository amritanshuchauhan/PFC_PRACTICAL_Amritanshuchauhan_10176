#include <stdio.h>

int main() {
    //Amritanshu chauhan
    //ERP-10176
    int a, b, i;

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++) {
        printf("%d ", i);
    }

    return 0;
}



//OUTPUT
//2 3 4 5 6