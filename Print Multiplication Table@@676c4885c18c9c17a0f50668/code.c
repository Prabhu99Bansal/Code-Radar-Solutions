#include <stdio.h>
int main(){
    int a,q;
    scanf("%d",&a);
    for(q=1;q<=10;q++){
        printf("%d x %d = %d\n",a,q,a*q);
    }
    return 0;
}