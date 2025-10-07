// الرقم الى 1

#include <iostream>
#include <string>
using namespace std;
int ReadNumber() {
	int n;
	cout << " enter a number ? \n";
	cin >> n;
	return n;
}
void printRangFromNTo1(int n) {
	for (int i = n ; i>=1; --i)
		cout << i << endl;
	

}
int main()
{
	printRangFromNTo1(ReadNumber());
}