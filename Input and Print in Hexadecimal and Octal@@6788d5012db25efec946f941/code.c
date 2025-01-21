#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    hexa=hex(a);
    octa=oct(a);
    printf("Hexadecimal: ",hexa);
    printf("Octal: ",octa);
    return 0;
}