#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (1<=a<=100){
        printf("In Range");
    }
    else if (a<1 && a>100){
        printf("Out of Range");
    }
    else{
        printf("invalid");
    }
    return 0;
}