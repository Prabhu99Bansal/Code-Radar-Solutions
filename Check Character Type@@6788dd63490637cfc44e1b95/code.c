#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if (n=='a'|| n=='e'|| n=='i' || n=='o' || n=='u'|| n=='A'
    || n=='E' || n=='I' || n=='O' || n=='U'){
        printf("Vowel");
    }
    else if( (a>='a' && a<='z') || (a>='A' && a<='Z')){
        printf("Consonant");
    }
    else if (a>='0' && a<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character")
    }
    return 0;
}