#include <stdio.h>

int main() {
    //AMRITANSHU CHAUHAN
    //ERP:-10176
    //sec D
    int n, i, arr[50];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Reversed array:\n");
    for(i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    return 0;
}
//OUTPUT
//Reversed array:
//50 40 30 20 10