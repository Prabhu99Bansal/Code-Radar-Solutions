#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if((a>0 && b>0) || (a<0 && b<0)){
        printf("Same Sign");
    }
    else{
        printf("Different Sign");
    }
    return 0;
}