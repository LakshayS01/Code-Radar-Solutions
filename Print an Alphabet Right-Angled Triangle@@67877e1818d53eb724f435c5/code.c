#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int main() {
    int n,i,j;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {   
        char chr=A;
        for (j=n;j<=i;j--)
        {
            printf("%d ",chr);
            chr+=1;
        }
        printf("\n");
    }
    return 0;
}