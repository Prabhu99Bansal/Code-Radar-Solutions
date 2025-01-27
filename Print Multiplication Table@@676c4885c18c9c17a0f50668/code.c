#include <stdio.h>
int main(){
    int i,j;
    scanf("%d",&j);
    for (i=1,i<=10;i++){
        printf("%dx%d=%d\n",j,i,i*j);
    }
    return 0;
}