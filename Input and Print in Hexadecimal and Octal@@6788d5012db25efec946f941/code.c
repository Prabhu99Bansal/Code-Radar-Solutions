#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    Hexadecimal=hex(a);
    Octal=oct(a);
    printf("Hexadecimal: ",Hexadecimal);
    printf("Octal: ",Octal);
    return 0;
}