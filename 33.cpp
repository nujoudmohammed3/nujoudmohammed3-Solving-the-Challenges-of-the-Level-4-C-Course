//
#include<iostream>
using namespace std;
int ReadNumberInRang(int Form, int To) {
	int Grade;
	do {
		cout << " Please enter a grade Between 0 and 100 ? \n";
		cin >> Grade;
	} while (Grade < Form || Grade > To);
		return Grade;
}
char GetGradeletter(int Grade) {
	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';

	else if (Grade >= 60)
		return'D';

	else if (Grade >= 50)
		return 'E';

	else
		return 'F';
}
int main()
{ 
	cout << "Result = " << GetGradeletter(ReadNumberInRang(0, 100));
	return 0;
	 system("pause"); 
}