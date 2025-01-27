#include <stdio.h>
int main(){
    int a,b,bit;
    scanf("%d",&a);
    scanf("%d",&b);
    bit =( (1<<b) | a) ;
    printf("%d",a);
    return 0;
 }