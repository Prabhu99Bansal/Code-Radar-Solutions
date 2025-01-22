#include <stdio.h>
#include <ctype.h>
int main(){
    char a;
    scanf("%c",&a);
    int b = a;
    if (a>=65 && a<=90){
        printf("Uppercase");
    }
    else if(a>=97 && a<=122){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabhet");
    }
}