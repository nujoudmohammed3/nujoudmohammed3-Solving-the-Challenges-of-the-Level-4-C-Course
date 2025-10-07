
#include <iostream>
#include <string>
using namespace std;

string ReadPhrCode()
{
    string PhrCode;
    cout << "Please Enter PIN Code:\n";
    cin >> PhrCode;
    return PhrCode;
}

bool Login()
{
    string PhrCode;
    int Counter = 3;
    do
    {
        Counter--;
        PhrCode = ReadPhrCode();

        if (PhrCode == "1234")
        {
            return true;
        }
        else
        {
            cout << "\nWrong PIN, you have " << Counter << " more tries\n";
            system("color 4F"); // تغيير لون الخلفية إلى الأحمر
        }
    } while (PhrCode != "1234" && Counter >= 1);
    return false;
}

int main()
{
    if (Login())
    {
        system("color 2F"); // تغيير لون الخلفية إلى الأخضر
        cout << "\nYour account balance is 7800\n";
    }
    else
    {
        cout << "\nYour card is blocked. Call the bank for help.\n";
    }
	 system("pause"); 

    return 0;
}