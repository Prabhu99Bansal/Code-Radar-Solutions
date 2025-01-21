#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a==b){
        printf("True");}
    else{
        printf("False");
    }
    printf("%s", welcome());
    return 0;
}