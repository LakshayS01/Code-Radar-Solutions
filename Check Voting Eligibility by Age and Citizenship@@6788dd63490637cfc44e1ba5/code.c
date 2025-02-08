#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,n;
    scanf("%d %d",&a,&n);
    if (a>=18 && n==1)
    {
        printf("Eligible");
    }
    else {
        printf("Not Eligible")
    }

    return 0;
}