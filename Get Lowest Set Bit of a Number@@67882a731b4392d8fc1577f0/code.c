// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n==0){
        printf("-1\n");
    }
    int pos = 0;
    while((n&1)==0){
        n>>=1;
        pos++;
    }
    printf("%d\n",pos);
    return 0;
}