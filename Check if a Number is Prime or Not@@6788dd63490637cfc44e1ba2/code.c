#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,,count=0;
    scanf("%d",&n);
    for (i=2;i<=n/2;i++)
    {
        if (n%i==0)
        {
            count+=1;
        }
    }
    if (count=1)
    {
        printf("%d",n);
    }
    return 0;
}