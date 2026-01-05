#include <stdio.h>
#include <string.h>

int main() {
    //Amritanshu chauhan
    //ERP-10176
    //sec-D
    char s1[20] = "Hello";
    char s2[20] = "World";

    printf("Length = %lu\n", strlen(s1));
    strcpy(s2, s1);
    strcat(s1, " C");
    printf("%s\n", s1);

    if (strcmp(s1, s2) == 0)
        printf("Same");
    else
        printf("Not Same");

    return 0;
}


//OUTPUT
//Length = 5
//Copied String = Hello
//Concatenated String = HelloHello
//Compare Result = 0