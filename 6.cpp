
#include <iostream>
using namespace std;
struct stInfo
{ 
	string FirstName;
	string LastName;

};
stInfo ReadInfo()
{
	stInfo Info;
	cout << " Please Enter Your Frist Name  ?\n";
	cin >> Info.FirstName;
	cout << " Please Enter Your Frist Name  ?\n";
	cin >> Info.LastName;
	return Info;
}
string GetFullname(stInfo Info , bool Reversed)
{
	string FullName;
	if (Reversed)
		FullName = Info.LastName + " " + Info.FirstName;
	else
		FullName = Info.FirstName + " " + Info.LastName;
	return FullName;
}
void PrintFullName(string FullName) {
	cout << "\n YYour Full Name  is " << FullName<<endl;
}

int main()
{
	PrintFullName(GetFullname(ReadInfo(), false));
     system("pause"); 
		
}

