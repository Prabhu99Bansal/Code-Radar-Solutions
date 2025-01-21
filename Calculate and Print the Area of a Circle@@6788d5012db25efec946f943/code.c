#include <stdio.h>
int main(){
    float pi = 3.14;
    int r;
    scanf("%d",&r);
    float area = (float)pi*r*r;
    printf("Area: %.2f",area);
    return 0;
}