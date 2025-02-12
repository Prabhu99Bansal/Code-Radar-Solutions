// Your code here...
#include <stdio.h>
int main(){
    int unsigned n;
    scanf("%u",&n);
    if (n==0){
        printf("32\n");
    }
    int count = 0;
    for(int i = 31;i>=0;i--){
        if((n>>i)&1){
            break;
        }
        count++;
    }
    printf("%d\n",count);
    return 0;
}