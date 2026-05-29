#include <stdio.h>

int main() {
    int a, b, choice;

    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice) {
        case 1:
            printf("Result = %d", a + b);
            break;

        case 2:
            printf("Result = %d", a - b);
            break;

        case 3:
            printf("Result = %d", a * b);
            break;

        case 4:
            printf("Result = %.2f", (float)a / b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
