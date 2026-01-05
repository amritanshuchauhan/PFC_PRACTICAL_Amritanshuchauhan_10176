#include <stdio.h>

int main() {
    //AMRITANSHU CHAUHAN
    //ERP:-10176
    //sec D
    int r, c, i, j, arr[10][10], max, min;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);

    max = min = arr[0][0];

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(arr[i][j] > max)
                max = arr[i][j];
            if(arr[i][j] < min)
                min = arr[i][j];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);

    return 0;
}

//OUTPUT

//Maximum = 20
//Minimum = 3