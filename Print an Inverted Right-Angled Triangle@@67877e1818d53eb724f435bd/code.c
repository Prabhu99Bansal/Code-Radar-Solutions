#include <stdio.h>
int main(){
    int i,j;
    scanf("%d",&j);
    for(i=1,i<=j;i++)
    {
        for(j,j>=i;j--)
        {
           printf("*");
        }
    printf("\n");
    }
    return 0;
}