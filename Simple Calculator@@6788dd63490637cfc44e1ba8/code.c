#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    char op;
    scanf("%d %d %c", &a, &b, &op);
    if (op=='+')
    {
        printf("%d",a+b);
    }
    else if (op=='-')
    {
        printf("%d",a-b);
    }
    else if (op=='*')
    {
        printf("%d",a*b);
    }
    else if (op=='/' && b>0)
    {
        printf("%d",a/b);
    }
    else 
    {
        printf("error");
    }
    return 0;
}






















