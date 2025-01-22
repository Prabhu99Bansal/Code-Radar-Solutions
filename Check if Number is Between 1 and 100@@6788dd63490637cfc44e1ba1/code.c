#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (1<=a<=100){
        printf("In Range");
    }
    else if (a==0){
        printf("inv");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}