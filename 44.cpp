

#include <iostream>
#include <string>
using namespace std;

enum enDayOfWeek { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 };

int ReadNumberInRange(string message, int from, int to) {
    int number = 0;
    do {
        cout << message << endl;
        cin >> number;
    } while (number < from || number > to);
    return number;
}

enDayOfWeek ReadDayOfWeek() {
    return (enDayOfWeek)ReadNumberInRange("Please enter day number [Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7]", 1, 7);
}

string GetDayOfWeek(enDayOfWeek day) {
    switch (day) {
    case Sat: return "Saturday";
    case Sun: return "Sunday";
    case Mon: return "Monday";
    case Tue: return "Tuesday";
    case Wed: return "Wednesday";
    case Thu: return "Thursday";
    case Fri: return "Friday";
    default: return "Not a valid Day";
    }
}

int main() {
    cout << GetDayOfWeek(ReadDayOfWeek()) << endl;
    	 system("pause"); 

    return 0;
}