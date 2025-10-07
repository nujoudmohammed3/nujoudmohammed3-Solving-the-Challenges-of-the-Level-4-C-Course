
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

float TotalBillAfterServiceAndTax(float TotalBill)
{
    TotalBill = TotalBill * 1.1; // 10% service fee
    TotalBill = TotalBill * 1.16;  // 16% sales tax
    return TotalBill;
}

void PrintDataBillAfterServiceAndTax()
{
    float TotalBill = ReadPositiveNumber("Please Enter Total Bill:");
    cout << endl;
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Bill After Service Fee and Sales Tax = " << TotalBillAfterServiceAndTax(TotalBill) << endl;
}

int main()
{
    PrintDataBillAfterServiceAndTax();
    	 system("pause"); 

    return 0;
}