#include <stdio.h>
#include <math.h>

// Calculator Functions
double addition(double num1, double num2);
double subtraction(double num1, double num2);
double multiplication(double num1, double num2);
double division(double num1, double num2);
double modulus(double num1, double num2);
double percentageCalculation(double num1, double num2);

// Additional Operations
double squareRoot(double num);
double cubeRoot(double num);
double exponentiation(double base, double exponent);
double factorial(double num);

// Main Function
int main() {
    double num1, num2, result;
    int choice;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Select an operation:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("5. Square Root\n6. Cube Root\n7. Exponentiation\n8. Factorial\n");
    printf("9. Modulus\n10. Percentage Calculation\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            result = addition(num1, num2);
            break;
        case 2:
            result = subtraction(num1, num2);
            break;
        case 3:
            result = multiplication(num1, num2);
            break;
        case 4:
            result = division(num1, num2);
            break;
        case 5:
            result = squareRoot(num1);
            break;
        case 6:
            result = cubeRoot(num1);
            break;
        case 7:
            result = exponentiation(num1, num2);
            break;
        case 8:
            result = factorial(num1);
            break;
        case 9:
            result = modulus(num1, num2);
            break;
        case 10:
            result = percentageCalculation(num1, num2);
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            return 0;
    }

    printf("The result is: %.2lf\n", result);
    return 0;
}

// Function Implementations
double addition(double num1, double num2) {
    return num1 + num2;
}

double subtraction(double num1, double num2) {
    return num1 - num2;
}

double multiplication(double num1, double num2) {
    return num1 * num2;
}

double division(double num1, double num2) {
    if (num2 == 0) {
        printf("Error! Division by zero is not allowed.\n");
//        exit(0);
    }
    return num1 / num2;
}

double modulus(double num1, double num2) {
    if (num2 == 0) {
        printf("Error! Division by zero is not allowed.\n");
//        exit(1);
    }
    return fmod(num1, num2);
}

double percentageCalculation(double num1, double num2) {
    return (num1 / 100) * num2;
}

double squareRoot(double num) {
    return sqrt(num);
}

double cubeRoot(double num) {
    return cbrt(num);
}

double exponentiation(double base, double exponent) {
    return pow(base, exponent);
}

double factorial(double num) {
    int i;
    double fact = 1;

    for (i = 1; i <= num; i++) {
        fact *= i;
    }

    return fact;
}
