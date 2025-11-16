#include <stdio.h>

// Function prototypes
void add();
void subtract();
void multiply();
void divide();

int main() {
    int choice;

    do {
        printf("\n=== SIMPLE CALCULATOR ===\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: add(); break;
            case 2: subtract(); break;
            case 3: multiply(); break;
            case 4: divide(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 5);

    return 0;
}

// Function definitions
void add() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a + b);
}

void subtract() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a - b);
}

void multiply() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2lf\n", a * b);
}

void divide() {
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    if(b != 0)
        printf("Result: %.2lf\n", a / b);
    else
        printf("Error: Division by zero!\n");
}
