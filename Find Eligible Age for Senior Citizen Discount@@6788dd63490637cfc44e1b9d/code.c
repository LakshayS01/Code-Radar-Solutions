#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanF("%d",&n);
    if (n>=60)
    {
        printf("Eligible");
    }
    else 
    {
        printf("Not Eligible");
    }
    return 0;
}