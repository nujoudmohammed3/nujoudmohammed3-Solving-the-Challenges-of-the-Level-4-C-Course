#include <iostream>
#include <string>
using namespace std;

struct TaskDuration {
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

TaskDuration SecondsToTaskDuration(int totalSeconds) {
    TaskDuration duration;
    const int secondsPerDay = 24 * 60 * 60;
    const int secondsPerHour = 60 * 60;
    const int secondsPerMinute = 60;

    duration.NumberOfDays = totalSeconds / secondsPerDay;
    int remainder = totalSeconds % secondsPerDay;

    duration.NumberOfHours = remainder / secondsPerHour;
    remainder = remainder % secondsPerHour;

    duration.NumberOfMinutes = remainder / secondsPerMinute;
    remainder = remainder % secondsPerMinute;

    duration.NumberOfSeconds = remainder;
    return duration;
}

void PrintTaskDurationDetails(TaskDuration duration) {
    cout << endl;
    cout << "Days: " << duration.NumberOfDays << endl;
    cout << "Hours: " << duration.NumberOfHours << endl;
    cout << "Minutes: " << duration.NumberOfMinutes << endl;
    cout << "Seconds: " << duration.NumberOfSeconds << endl;
}

int main() {
    int totalSeconds = ReadPositiveNumber("Please Enter Total Seconds: ");
    TaskDuration duration = SecondsToTaskDuration(totalSeconds);
    PrintTaskDurationDetails(duration);
    	 system("pause"); 

    return 0;
}