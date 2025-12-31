#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    int choice, num1, num2;
    float result;

    do {
        printf("\n===== Basic Number Operations =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
        }

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result = %.2f\n", result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Result = %.2f\n", result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Result = %.2f\n", result);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Error! Division by zero not allowed.\n");
                } else {
                    result = divide(num1, num2);
                    printf("Result = %.2f\n", result);
                }
                break;
            case 5:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 5);

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}
