#include <stdio.h>
#include <ctype.h>
int main(){
    char a;
    scanf("%c",&a);
    if (isupper(a)==1){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
}