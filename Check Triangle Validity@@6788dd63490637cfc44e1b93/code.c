#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,s,d;
    scanf("%d %d %d",&a,&s,&d);
    if (d*d==(s*s+a*a)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}