#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%i",&a);
    printf("Hexadecimal: %H \n",a);
    printf("Octal: %o",a);
    return 0;
}