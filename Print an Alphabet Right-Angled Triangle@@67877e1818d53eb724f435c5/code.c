#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int main() {
    int n,i,j;
    
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {   
        char ch='A';
        for (j=n;j<=i;j--)
        {   
            for (ch='A';ch<='Z';ch++){
                printf("%c ",ch);
            }   
        }
        printf("\n");
    }
    return 0;
}