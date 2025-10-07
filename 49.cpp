
#include <iostream>
#include <string>
using namespace std;

string ReadPincode()
{
    string Pincode;
    cout << "Please Enter PIN Code:\n";
    cin >> Pincode;
    return Pincode;
}

bool Login()
{
    string Pincode;

    do
    {
        Pincode = ReadPincode();
        if (Pincode == "1234")
        {
            return true;
        }
        else
        {
            cout << "\nWrong PIN\n";
            system("color 4F"); // تغيير لون الخلفية إلى الأحمر
        }
    } while (Pincode != "1234");

    return false;
}

int main()
{
    if (Login())
    {
        system("color 2F"); // تغيير لون الخلفية إلى الأخضر
        cout << "\nYour account balance is " << "7800\n";
        	 system("pause"); 

    }

    return 0;
}