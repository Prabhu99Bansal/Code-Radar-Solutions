// Your code here...
#include <stdio.h>

int main() {
    int num, pos;
    scanf("%d %d", &num, &pos);
    int updated_num = num | (1 << pos);
    printf("%d\n", updated_num);
    return 0;
}
