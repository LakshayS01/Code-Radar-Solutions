#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b ;
    scanf("%a %b",&a,&b);
    if (a>0 && b<0 || a==0 &&b==0){
        printf("True");
    }
    else {
        printf("False");
    }
    
    return 0;
}