#include <stdio.h>

int main() {
    int x;
    int y;

    printf("enter your numbers \n >>");
    scanf("%d %d", &x, &y);

    printf("%d %d \n", x, y);

    if (x>y){
        printf("x is greater than y");
    }
    else if (x == y) {
        printf("they are equal");
    }
    else {
        printf("y is greater than x");
    }
}
