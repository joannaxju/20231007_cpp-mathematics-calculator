#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string operation;    
    double num1,num2,num3;  

    cout << "Please choose an operation: ";
    cin >> operation;

    if(operation == "fabs" || operation == "sqrt" || operation == "addition" || operation == "subtraction" || operation == "division" || operation == "multiplication" || operation == "pythagorean" || operation == "quadratic")
    {
        cout << "Enter your first number: ";
        cin >> num1;
        if(operation == "addition" || operation == "subtraction" || operation == "division" || operation == "multiplication" || operation == "pythagorean" || operation == "quadratic")
        {
            cout << "Enter your second number: ";
            cin >> num2;
            if(operation == "quadratic")
            {
                cout << "Enter your third number: ";
                cin >> num3;
            }
        }
    }
    if(operation == "addition")
    {
        cout << "Equation: " << num1 << " + " << num2 << endl;
        cout << "\nResult: " << num1 + num2 << endl;
    }
    else if(operation == "subtraction")
    {
        cout << "Equation: " << num1 << " - " << num2 << endl;
        cout << "\nResult: " << num1 - num2 << endl;
    }
    else if(operation == "division")
    {
        cout << "Equation: " << num1 << " / " << num2 << endl;
        if(num2 == 0)
            cout << "\nError: Cannot divide by zero." << endl;
        else
            cout << "\nResult: " << num1 / num2 << endl;
    }
    else if(operation == "multiplication")
    {
        cout << "Equation: " << num1 << " * " << num2 << endl;
        cout << "\nResult: " << num1 * num2 << endl;
    }
    else if(operation == "fabs")
    {
        cout << "Equation: fabs(" << num1 << ") " << endl;
        cout << "\nResult: " << fabs(num1) << endl;
    }
    else if(operation == "sqrt")
    {
        cout << "Equation: sqrt(" << num1 << ")" << endl;
        if(num1 >= 0)
            cout << "\nResult: " << sqrt(num1) << endl;
        else
        {
            cout << "\nError: Cannot take square root of a negative number.";
            cout << endl;
        }
    }
    else if(operation == "quadratic")
    {
        cout << "Equation: " << num1 << "x^2 + ";
        cout << num2 << "x + " << num3 << " = 0" << endl;
        if(num1 == 0)
        {
            cout << "\nResult: " << (-1 * num3) / num2  << endl;
        }
        else
        {
            double x1, x2;
            double xa = (num2 * -1);
            double xb = (num2 * num2) - (4 * num1 * num3);
            double xc = 2 * num1;
            if(xb >= 0)
            {
                x1 = (xa + sqrt(xb)) / xc;
                x2 = (xa - sqrt(xb)) / xc;
                cout << "\nResults: " << x1 << ", " << x2 << endl;
            }
            else
            {
                cout << "\nError: Cannot take square root of a ";
                cout << "negative number.\n";
            }
        }
    }
    else if(operation == "pythagorean")
    {
        cout << "Equation: sqrt(" << num1 << "^2 + " << num2 << "^2)" << endl;
        cout << "\nResult: " << sqrt((num1 * num1) + (num2 * num2)) << endl;
    }
    else
    {
        cout << "Error: Operation not supported." << endl;
    }
}