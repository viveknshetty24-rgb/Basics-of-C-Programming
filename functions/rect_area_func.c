#include <stdio.h>
int area(int length, int width) {
    return length * width;
}
int main() {
    int l, w;
    printf("Enter length: ");
    scanf("%d", &l);
    printf("Enter width: ");
    scanf("%d", &w);
    printf("Area = %d", area(l, w));
    return 0;
}