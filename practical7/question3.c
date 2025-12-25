#include <stdio.h>

int main() {
    //Amritanshu chauhan
    //ERP-10176
    int i, j;

    for(i = 1; i <= 4; i++) {
        for(j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}



//OUTPUT
//A
//AB
//ABC
//ABCD