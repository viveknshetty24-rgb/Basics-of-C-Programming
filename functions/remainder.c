#include <stdio.h>

int remainder(int a, int b) {
    return a % b;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Remainder = %d", remainder(x, y));

    return 0;
}