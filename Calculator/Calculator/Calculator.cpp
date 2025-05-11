#include <iostream> // Input/Output stream library
using namespace std; // Allows usage of cin and cout without std::

int main() {
    // Variables
	double num1, num2, result; // Declared Double variable to handle decimal numbers
	char o; // Declared Character variable for operators (+, -, *, /)
    bool validOperation = true; // Boolean to check if the operation is valid

    // Display message and ask user to input required information
    cout << "Enter first number:"; 
    cin >> num1;

    cout << "Enter operator: (+, -, *, /)";
    cin >> o;

    cout << "Enter second number:";
    cin >> num2;

	switch (o) { // Statement to handle multiple cases based on the value of the variable Char (o)
    case '+': // If operator is '+'
        result = num1 + num2; // Perform addition
		break; // Prevents the next execution of the case statement 

    case '-': // If operator is '-'
        result = num1 - num2; // Perform subtraction
        break;

    case '*': // If operator is '*'
        result = num1 * num2; // Perform multiplication
        break;

    case '/': // If operator is '/'
		if (num2 != 0) { // Check if the second number is not zero
            result = num1 / num2; // Perform division
        }
        else {
			cout << "\nError: A number cannot be divided by Zero" << endl; //Display error message
            validOperation = false; // Mark operation as invalid
        }
        break;

    default: // If the user inputs an invalid operator
		cout << "\nError: You have entered an invalid operator" << endl; //Display error message
        validOperation = false; // Mark operation as invalid
        break;
    }

    // Display the result if the operation is valid
    if (validOperation) {
        cout << "\nResult: " << result << endl;
    }

    return 0;
}