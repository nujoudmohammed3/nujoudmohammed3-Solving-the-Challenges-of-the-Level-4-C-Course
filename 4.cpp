

#include <iostream>
using namespace std;

struct stInfo {
	short age;
	bool HasDrivingLicense;
};
stInfo ReadInfo() {
	stInfo Info;
	cout << " Please Enter Your Age ?\n";
	cin >> Info.age;
	cout << "Do you have driver Llicense 0 for no 1 for yes \n ";
	cin >> Info.HasDrivingLicense;
	return Info;
}
bool IsAccepted(stInfo Info) {
	return (Info.age > 21 && Info.HasDrivingLicense);
}
void PrintResult(stInfo Info) {
	if (IsAccepted(Info))
		cout << "\n Hired \n ";
	else
		cout << "\n Rejected\n ";

}
int main()
{
	PrintResult(ReadInfo());
    system("pause");
}

