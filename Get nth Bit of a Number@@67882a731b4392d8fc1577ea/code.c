#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d %d",&n,&i);
    int m=1<<i;
    if(n&m)
        printf("1");
    else 
        printf("0");   
    return 0;
}
