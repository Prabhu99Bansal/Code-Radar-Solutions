#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if ((a*a)==b && (a*a)%b==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;

}