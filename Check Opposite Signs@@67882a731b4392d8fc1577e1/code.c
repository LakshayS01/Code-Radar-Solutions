#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a ,b;
    scanf("%d %d",&a,&a);
    if ((a>0) && (b<0)){
        printf("True");
    }
    else if ((a<0) && (b>0)){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}