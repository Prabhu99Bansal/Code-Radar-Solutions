// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n==0){
        printf("32\n");
        return 0;
    }
    int count = 0;
    while ((n&1)==0){
        count++;
        n>>=1
    }
    printf("%d\n",count);
    return 0;
}