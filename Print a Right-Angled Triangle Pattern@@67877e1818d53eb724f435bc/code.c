#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&b);
        for (a = 1; a <=b ; a++)
    {
        for (b = 1; b <= a; b++)
        {
            printf("*");
        }
        printf("\n");
        }
    return 0;
}