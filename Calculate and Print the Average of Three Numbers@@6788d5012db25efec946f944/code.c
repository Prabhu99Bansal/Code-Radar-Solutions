#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int avg= (float) (a+b+c)/3;
    print("Average: %.2f",avg);
    return 0;
}