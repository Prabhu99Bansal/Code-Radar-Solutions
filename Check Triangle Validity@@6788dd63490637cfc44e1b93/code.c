#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int sum1= a+b;
    int sum2= b+c;
    int sum3= a+c;
    if (a<sum2 && b<sum3 && c<sum1){
        printf("Valid");
    }
    else {
        printf("Invalid");
    }
}