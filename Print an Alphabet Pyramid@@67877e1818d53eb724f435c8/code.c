#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,i,j,k;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        char ch='A'
        for (ch='A';ch<='Z';ch++)
        {
            printf("%c ",ch);
        }
        printf("\n");
    }   
    
    return 0;
}