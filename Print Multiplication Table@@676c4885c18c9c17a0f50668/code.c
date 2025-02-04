#include <stdio.h>
int main(){
    int a,q;
    scanf("%d",&a);
    for(q=1;q<=10;q++){
        printf("%dx%d=%d",a,q,a*q);
    }
    return 0;
}