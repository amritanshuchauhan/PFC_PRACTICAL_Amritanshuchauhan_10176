#include <stdio.h>

int main() {
    //Amritanshu chauhan
    //ERP-10176
    //sec-D
    float r, area;
    printf("Enter radius: ");
    scanf("%f", &r);

    area = 3.14 * r * r;
    printf("Area = %.2f", area);

    return 0;
}


//OUTPUT
//Area = 153.86