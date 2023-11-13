#include <iostream>
#include <cmath>
using namespace std;

// Addition function
double add(double num1, double num2)
{
    return (num1 + num2);
}

// Subtract function
double subtract(double num1, double num2)
{
    return (num1 - num2);
}

// Multiply function
double multiply(double num1, double num2)
{
    return (num1 * num2);
}

// Divide function
double divide(double num1, double num2)
{
    return (num1 / num2);
}

// Function to find Armstrong numbers
string armStrongNumbers()
{
    // variables
    int last, mid, first, a;

    cout << "Armstrong numbers between 99 and 999 are: ";
    // using for-loop
    for (int i = 99; i <= 999; i++)
    {
        a = i;
        last = a % 10;
        a = a / 10;
        mid = a % 10;
        a = a / 10;
        first = a % 10;
        if (((first * first * first) + (last * last * last) + (mid * mid * mid)) == i)
        {
            cout << i << " ";
        }
    }
    return "\n";
}

// Binary to Decimal conversion
int binaryToDecimal(int num1, int num2, int num3)
{
    int decimal = 0;
    decimal = decimal + (num3 * pow(2, 0));
    decimal = decimal + (num2 * pow(2, 1));
    decimal = decimal + (num1 * pow(2, 2));

    return decimal;
}

// Function to check whether the input is binary or not
bool checkBinaryInput(int num1, int num2, int num3)
{
    return (num1 == 0 || num1 == 1) && (num2 == 0 || num2 == 1) && (num3 == 0 || num3 == 1);
}
// main function
int main()
{
    // variables
    double num1, num2;
    int num3, choice;

    cout << "Welcome to calculator:\nEnter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division\nEnter 5 for checking Armstrong numbers\nEnter 6 for binary to decimal conversion...\n";
    cin >> choice;
    // using switch-case
    switch (choice)
    {
    case 1:
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        // calling add function
        cout << "Result: " << add(num1, num2) << endl;
        break;

    case 2:
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        // calling subtract function
        cout << "Result: " << subtract(num1, num2) << endl;
        break;

    case 3:
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        cout << "Result: " << multiply(num1, num2) << endl;
        break;

    case 4:
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        // calling divide function
        cout << "Result: " << divide(num1, num2) << endl;
        break;

    case 5:
        // calling armstrong function
        cout << armStrongNumbers();
        break;

    case 6:
        cout << "Enter first number : ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        cout << "Enter third number : ";
        cin >> num3;
        // calling checking function
        if (checkBinaryInput(num1, num2, num3))
        {
            // calling conversion function
            int decimalOutput = binaryToDecimal(num1, num2, num3);
            cout << "Decimal number is: " << decimalOutput << endl;
        }
        else
        {
            cout << "The number is not binary!" << endl;
        }
        break;

    default:
        cout << "INVALID INPUT!!!" << endl;
        break;
    }

    return 0;
}
