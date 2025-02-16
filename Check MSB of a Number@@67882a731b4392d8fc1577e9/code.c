#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int msb = 1<<31;
    if (a&msb){
        printf("Set");
        }
    else{
        printf("Not Set");
    }
    return 0 ;
    
}