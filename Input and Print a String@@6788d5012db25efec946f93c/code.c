#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[50];
    scanf("%s", &a);
    printf("YOU entered: %s", a);
    return 0;
}