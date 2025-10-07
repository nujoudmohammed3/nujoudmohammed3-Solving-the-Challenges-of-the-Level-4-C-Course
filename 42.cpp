
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

TaskDuration ReadTaskDuration() {
    TaskDuration duration;
    duration.NumberOfDays = ReadPositiveNumber("Enter Number of Days: ");
    duration.NumberOfHours = ReadPositiveNumber("Enter Number of Hours: ");
    duration.NumberOfMinutes = ReadPositiveNumber("Enter Number of Minutes: ");
    duration.NumberOfSeconds = ReadPositiveNumber("Enter Number of Seconds: ");
    return duration;
}

int TaskDurationInSeconds(TaskDuration duration) {
    int totalSeconds = 0;
    totalSeconds += duration.NumberOfDays * 24 * 60 * 60;
    totalSeconds += duration.NumberOfHours * 60 * 60;
    totalSeconds += duration.NumberOfMinutes * 60;
    totalSeconds += duration.NumberOfSeconds;
    return totalSeconds;
}

int main() {
    TaskDuration duration = ReadTaskDuration();
    cout << endl << "Task Duration In Seconds: " << TaskDurationInSeconds(duration) << endl;
    	 system("pause"); 

    return 0;
}