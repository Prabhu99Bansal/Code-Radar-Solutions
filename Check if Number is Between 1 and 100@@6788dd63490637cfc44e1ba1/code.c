#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (a==0){
        printf("Out of Range");
    }
    else if(100>=a>=1){
        printf("In Range");
        
    }
    else{
        printf("Invalid");
    }
    return 0;
}