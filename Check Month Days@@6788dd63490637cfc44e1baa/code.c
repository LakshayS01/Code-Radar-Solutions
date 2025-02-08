#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 1 ||3||5||7||8||10||12:
        printf("31");
        break;
        case 2||4||6||9||11:
        printf("28");
        break;
        default:
        printf("Invalid");
    }
    return 0;
}