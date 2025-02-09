#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,i,j;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {   
        int count=1;
        for (j=1;j<=i;j++)
        {
            printf("%d",count);
            count+=1;
        }
        printf("\n");
    }
    return 0;
}