#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%i",&a);
    printf("Hexadecimal: %h",a);
    printf("Octal: %o",a);
    return 0;
}