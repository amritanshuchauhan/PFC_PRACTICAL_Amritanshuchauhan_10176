#include <stdio.h>

int main() {
    //Amritanshu chauhan
    //ERP-10176
    int pin, correctPin = 1234;

    printf("Enter ATM PIN: ");
    scanf("%d", &pin);

    if (pin == correctPin) {
        printf("Access Granted");
    } else {
        printf("Access Denied");
    }

    return 0;
}



//OUTPUT
//Access Granted