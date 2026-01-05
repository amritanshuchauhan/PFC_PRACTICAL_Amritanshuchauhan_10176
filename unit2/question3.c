#include <stdio.h>

int main() {
    //Amritanshu chauhan
    //ERP-10176
    //sec-D
    int a = 5, b = 10, temp;
    temp = a;
    a = b;
    b = temp;
    printf("a=%d b=%d", a, b);
    return 0;
}
    
//OUYPUT
//Integer = 10
//Float = 5.50
//Character = A
//Double = 12.3456