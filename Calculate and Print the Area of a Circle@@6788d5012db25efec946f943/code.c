#include <stdio.h>
int main(){
    float pi = 3.14;
    float r;
    scanf("%f",&r);
    float area = (float)pi*r*r;
    printf("Area: %.2f",area);
    return 0;
}