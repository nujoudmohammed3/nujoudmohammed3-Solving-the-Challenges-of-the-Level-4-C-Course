// اطبع من 1 الى الرقم 

#include <iostream>
#include <string>
using namespace std;
int ReadNumber() {
	int n;
	cout << " enter a number ? \n";
	cin >> n;
	return n;
}
void printRangFrom1ToN(int n) {
	for (int i = 1; i <= n; i++) {
		cout << i << endl;
	}
}
int main()
{
	printRangFrom1ToN(ReadNumber());
	 system("pause"); 
}
