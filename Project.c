#include <stdio.h>

void convertDistance();
void convertWeight();
void convertTemperature();
void convertCurrency();

int main() {
    int choice;

    do {
        printf("\n--- Unit Converter ---\n");
        printf("1. Distance\n");
        printf("2. Weight\n");
        printf("3. Temperature\n");
        printf("4. Currency\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                convertDistance();
                break;
            case 2:
                convertWeight();
                break;
            case 3:
                convertTemperature();
                break;
            case 4:
                convertCurrency();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

void convertDistance() {
    int choice;
    float value, result;

    printf("\n--- Distance Converter ---\n");
    printf("1. Kilometers to Miles\n");
    printf("2. Miles to Kilometers\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the value: ");
    scanf("%f", &value);

    switch (choice) {
        case 1:
            result = value * 0.621371;
            printf("%.2f Kilometers = %.2f Miles\n", value, result);
            break;
        case 2:
            result = value / 0.621371;
            printf("%.2f Miles = %.2f Kilometers\n", value, result);
            break;
        default:
            printf("Invalid choice for distance.\n");
    }
}

void convertWeight() {
    int choice;
    float value, result;

    printf("\n--- Weight Converter ---\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the value: ");
    scanf("%f", &value);

    switch (choice) {
        case 1:
            result = value * 2.20462;
            printf("%.2f Kilograms = %.2f Pounds\n", value, result);
            break;
        case 2:
            result = value / 2.20462;
            printf("%.2f Pounds = %.2f Kilograms\n", value, result);
            break;
        default:
            printf("Invalid choice for weight.\n");
    }
}

void convertTemperature() {
    int choice;
    float value, result;

    printf("\n--- Temperature Converter ---\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the value: ");
    scanf("%f", &value);

    switch (choice) {
        case 1:
            result = (value * 9/5) + 32;
            printf("%.2f Celsius = %.2f Fahrenheit\n", value, result);
            break;
        case 2:
            result = (value - 32) * 5/9;
            printf("%.2f Fahrenheit = %.2f Celsius\n", value, result);
            break;
        default:
            printf("Invalid choice for temperature.\n");
    }
}

void convertCurrency() {
    int choice;
    float value, result;

    printf("\n--- Currency Converter ---\n");
    printf("1. USD to INR\n");
    printf("2. INR to USD\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the value: ");
    scanf("%f", &value);

    switch (choice) {
        case 1:
            result = value * 82.50; // Example conversion rate
            printf("%.2f USD = %.2f INR\n", value, result);
            break;
        case 2:
            result = value / 82.50; // Example conversion rate
            printf("%.2f INR = %.2f USD\n", value, result);
            break;
        default:
            printf("Invalid choice for currency.\n");
    }
}
