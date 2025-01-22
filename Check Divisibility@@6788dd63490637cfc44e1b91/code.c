#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a%5==0 && b%11==0){
        printf("Divisible");
    }
    else{
        printf("Not Divisible");
    }
}