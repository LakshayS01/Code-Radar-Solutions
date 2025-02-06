#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    if (a>='a' && a<='z')
    {
        if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u') {
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    return 0;
}