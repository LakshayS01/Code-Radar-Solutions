#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,i;
    scanf("%d",&n);
    for (i=1;i<=10;i++)
    {
        printf("%d x %d = %d \n",n,i,n*i);

    }   
    return 0;
}