#include <stdio.h>
int main()
{
    int n;
    int b=32;
    scanf("%d",&n);
    int m=1<<b-1;
    if(m&n)
        printf("Set");
    else 
        printf("Not Set");   
    return 0;
}
