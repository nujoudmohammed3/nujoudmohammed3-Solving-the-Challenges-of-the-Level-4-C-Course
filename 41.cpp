
#include <iostream>
#include <string>
using namespace std;

float ReadPostfixedNumber(string message)
{
    float Number = 0;
    do
    {
        cout << message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

float HoursToDays(float NumberOfHours)
{
    return NumberOfHours / 24.0f;
}

float HoursToWeeks(float NumberOfHours)
{
    return NumberOfHours / (24.0f * 7);
}

float DaysToWeeks(float NumberOfDays)
{
    return NumberOfDays / 7.0f;
}

void PrintConvertHoursIntoDaysAndWeeks()
{
    float NumberOfHours = ReadPostfixedNumber("Please Enter Number of Hours?");
    float HoursInDays = HoursToDays(NumberOfHours);
    float NumberOfWeeks = DaysToWeeks(HoursInDays);
    cout << endl;
    cout << "Total Hours = " << NumberOfHours << endl;
    cout << "Total Days = " << HoursInDays << endl;
    cout << "Total Weeks = " << HoursToWeeks(NumberOfHours) << endl;
}

int main()
{
    PrintConvertHoursIntoDaysAndWeeks();
    	 system("pause"); 

    return 0;
}