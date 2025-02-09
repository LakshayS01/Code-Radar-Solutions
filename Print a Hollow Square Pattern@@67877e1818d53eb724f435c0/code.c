#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,i,j;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {   
            if (n%2!=0  && i==(n/2)+1)
            {
                
            }
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}