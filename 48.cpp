
#include <iostream>
#include <string>
using namespace std;

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

float MonthlyInstallment(float LoanAmount, float NumberOfMonths)
{
    return LoanAmount / NumberOfMonths;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount?");
    float NumberOfMonths = ReadPositiveNumber("How Many Months?");
    cout << "\nMonthly Installment = " << MonthlyInstallment(LoanAmount, NumberOfMonths) << endl;
    	 system("pause"); 

    return 0;
}