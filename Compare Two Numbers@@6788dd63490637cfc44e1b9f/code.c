#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,s;
    scanf("%d%d",&a,&s);
    if (a>s)
    {
        printf("First");
    }
    else if(a<s)
    {
        printf("Second");
    }
    else
    {
        printf("Equal");
    }
    return 0;
}