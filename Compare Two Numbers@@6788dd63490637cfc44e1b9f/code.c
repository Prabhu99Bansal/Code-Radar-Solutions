#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a>b){
        printf("First");
    }
    else if (a<b){
        printf("Second");
    }
    else if(a==b){
        printf("Equal");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}