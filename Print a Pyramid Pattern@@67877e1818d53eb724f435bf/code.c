#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,i,j,k;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {   
        for (k=1;k<=n-1;k++)
        {
            printf(" ");
        }
        for (j=1;j<=i+1;j+=2)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}