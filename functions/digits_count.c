#include <stdio.h>
int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        n = n / 10;
        count++;
    }
    return count;
}
int main() {
    int num = 12345;
    printf("Number of digits = %d", countDigits(num));
    return 0;
}