#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    switch (a){
        case 90...100:
        printf("A");
        break;
        case 80 ...89:
        printf("B");
        break;
        case 70...79:
        printf("C");
        break;
        case 60...69:
        printf("D");
        break;
        case a<60:
        printf("F");
        break;
        default:
        printf("INVALID");
        break;}
        return 0;
}