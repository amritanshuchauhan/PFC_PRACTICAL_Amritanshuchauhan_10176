#include <stdio.h>

int main() {
    //Amritanshu chauhan
    //ERP-10176
    //sec-D
    int a[5], i, key;

    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Enter key: ");
    scanf("%d", &key);

    for (i = 0; i < 5; i++) {
        if (a[i] == key) {
            printf("Found");
            break;
        }
    }

    for (i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    printf("\nSorted array:\n");
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);

    return 0;
}


//OUTPUT
//1 2 3 4 5