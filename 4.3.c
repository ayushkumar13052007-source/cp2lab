#include <stdio.h>

enum Menu {
    ADD = 1, SUBTRACT, MULTIPLY, DIVIDE, EXIT
};

int main() {
    int choice, a, b;

    do {
        printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case ADD:
                scanf("%d %d", &a, &b);
                printf("Sum = %d\n", a + b);
                break;
            case SUBTRACT:
                scanf("%d %d", &a, &b);
                printf("Difference = %d\n", a - b);
                break;
            case MULTIPLY:
                scanf("%d %d", &a, &b);
                printf("Product = %d\n", a * b);
                break;
            case DIVIDE:
                scanf("%d %d", &a, &b);
                if(b != 0)
                    printf("Quotient = %.2f\n", (float)a / b);
                else
                    printf("Cannot divide by zero\n");
                break;
            case EXIT:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while(choice != EXIT);

    return 0;
}