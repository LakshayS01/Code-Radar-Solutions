#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[50],b[50];
    int c;
    scanf("%s %d %s",&a,&c,&b);
    printf("Name: %s \nAge: %d \nHobby: %s",a,c,b);
    return 0;
}