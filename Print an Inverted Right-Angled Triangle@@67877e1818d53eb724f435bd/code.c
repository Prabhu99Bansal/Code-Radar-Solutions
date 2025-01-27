#include <stdio.h>
int main(){
    int i,j,s,e;
    scanf("%d",&s);
    scanf("%d",&e);
    for(i=s,i<=e;i++)
    {
        for(j=e,j>=i;j--)
        {
           printf("*");
        }
    printf("\n");
    }
    return 0;
}