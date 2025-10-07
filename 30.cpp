

#include <iostream>
using namespace std;
int ReadNumber() {
	int n;
	cout << " enter a number \n";
	cin >> n;
	return n;
}
int fact(int n) {
	int fact = 1;
	for (int i = 1; i <= n; i++) {
		fact *= i;
	}
		
	return fact;
}
int main()
{
	cout<<fact(ReadNumber());
}
