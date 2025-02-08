#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,o;
    scanf("%d %d %d",&a,&b,&o);
    if (o==+)
    {
        printf("%d",a+b);
    }
    else if (o==-)
    {
        printf("%d",a-b);
    }
    return 0;
}