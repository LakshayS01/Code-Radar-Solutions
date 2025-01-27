#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,s;
    scanf("%a %s",&a ,&s);
    if (a>=s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}