// C code for ARITHMETIC CALCULATOR

#include<stdio.h>
#include<unistd.h>

// Function to add
double add(double number1, double number2){
    return number1 + number2;
}

// Function to substract
double substract(double number1, double number2){
    return number1 - number2;
}

// Function to multiply
double multiply(double number1, double number2){
    return number1 * number2;
}

// Function to divide
double divide(double number1, double number2){
    return number1 / number2;
}

int main(){

    printf("\n\t--ARITHMETIC CALCULATOR--\n");

    double number1, number2;
    int choice, repeat = 1;

    while (repeat == 1){
        printf("Choose from the following operations-\n"
                "\t1. Addition.\n"
                "\t2. Substraction.\n"
                "\t3. Multiplication.\n"
                "\t4. Division.\n");

        printf("Please enter your choice: ");
        scanf("%d", &choice);

        // Taking user input for the operations
        printf("Enter the first number: ");
        scanf("%lf", &number1);

        printf("Enter the second number: ");
        scanf("%lf", &number2);


        if (choice == 1){
            // Addition
            printf("\t%.2lf + %.2lf = %.2lf\n", number1, number2, add(number1, number2));
        }  

        else if (choice == 2){
            // Substraction
            printf("\t%.2lf - %.2lf = %.2lf\n", number1, number2, substract(number1, number2));
        }  

        else if (choice == 3){
            // Multiplication
            printf("\t%.2lf * %.2lf = %.2lf\n", number1, number2, multiply(number1, number2));
        }

        else if (choice == 4){
            // Division
            printf("\t%.2lf / %.2lf = %.2lf\n", number1, number2, divide(number1, number2));
        }    
        // ".2lf" ---> 2 digits after the decimal point

        else{
            printf("Wrong Input.\n");
        }

        sleep(1);       // Program sleeps for 1 second

        printf("Enter '1' to continue.\n"
                "Enter '2' to exit. ");
        
        scanf("%d", &repeat);

        if (repeat == 2){
            printf("\t--Thank You--\n");
        }
    }

    return 0;

}