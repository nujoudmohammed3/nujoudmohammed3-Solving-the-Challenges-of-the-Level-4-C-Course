
#include <iostream>
#include <string>
using namespace std;

enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

float ReadNumber(string Message)
{
    float Number = 0;
    cout << Message << endl;
    cin >> Number;
    return Number;
}

enOperationType ReadOperationType()
{
    char OT;
    cout << "Please enter Operation Type (+, -, *, /): ";
    cin >> OT;
    return (enOperationType)OT;
}

float Calculate(float Number1, float Number2, enOperationType OpType)
{
    switch (OpType)
    {
    case Add:
        return Number1 + Number2;
    case Subtract:
        return Number1 - Number2;
    case Multiply:
        return Number1 * Number2;
    case Divide:
        if (Number2 != 0)
            return Number1 / Number2;
        else
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    default:
        cout << "Invalid operation type!" << endl;
        return 0;
    }
}

int main()
{
    float Number1 = ReadNumber("Please enter the first Number:");
    float Number2 = ReadNumber("Please enter the second Number:");

    enOperationType OpType = ReadOperationType();

    cout << endl << "Result = " << Calculate(Number1, Number2, OpType) << endl;
system("pause"); 
    return 0;
}