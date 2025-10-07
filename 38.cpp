
#include <iostream>
#include <cmath>
using namespace std;

enum PrimeStatus { Prime = 1, NotPrime = 2 };

float ReadPositiveNumber(string Message)
{
    float Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

PrimeStatus CheckPrime(int Number)
{
    if (Number <= 1)
        return NotPrime;

    for (int Counter = 2; Counter <= sqrt(Number); Counter++)
    {
        if (Number % Counter == 0)
            return NotPrime;
    }
    return Prime;
}

void PrintNumberType(int Number)
{
    switch (CheckPrime(Number))
    {
    case Prime:
        cout << "The number is Prime \n";
        break;
    case NotPrime:
        cout << "The number is Not Prime \n";
        break;
    }
}

int main()
{
    int Number = ReadPositiveNumber("Please enter a positive number");
    PrintNumberType(Number);
    system("pause"); 
    return 0;
}