#include <stdio.h>
int main(){
    int i;
    scanf("%d",&i);
        for(int a=1;a<=i;a++)
        {
        for(int b=a ;b<=i;b++){
            printf("* ");
        }
        printf("\n");
        }
    
    
    return 0;
}