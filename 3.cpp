
#include <iostream>
using namespace std;
enum enNumberType{ odd = 1 , even = 2 };
int ReadNumber() {
    int number;
    cout << " Please enter a number \n";
    cin >> number;
    return number;
}
enNumberType CheckNumberType(int num) {
    int  result = num % 2;

    if (result == 0)

        return enNumberType::even;
    else
        return enNumberType::odd;
}
void PrintNumberType(enNumberType NumberType)
{
    if (NumberType == enNumberType::even)
        cout << "The number is Even \n";
    else
        cout << "The number is Odd \n ";
}
int main()
{
    PrintNumberType(CheckNumberType(ReadNumber()));
      system("pause"); 
}
