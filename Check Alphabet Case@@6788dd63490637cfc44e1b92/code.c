#include <stdio.h>
#include <ctype.h>
int main(){
    char a;
    scanf("%c",&a);
    if (isupper(a)==true){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
}