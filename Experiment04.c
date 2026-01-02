//4 Program to find largest of two numbers
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("%d is the largest number", a);
    } else if (b > a) {
        printf("%d is the largest number", b);
    } else {
        printf("Both numbers are equal");
    }

    return 0;
}
