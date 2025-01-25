#include <stdio.h>
int isprime(int num,int i){
    if (n<=1){
        return 0;
    }
    if (i == num){
        return 1;
    }
    if (num%i==0){
        return 0;
    }
    return isprime(num,i+1);
}
int main(){
    int  num;
    scanf("%d",&num);
    if (isprime(num,2)){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}