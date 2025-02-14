#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d %d",&n,&i);
    int m=1<<i;
    if(n&m)
        printf("0");
    else 
        printf("1");   
    return 0;
}
