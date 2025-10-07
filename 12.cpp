
#include <iostream>
#include<string>
using namespace std;
void ReadNumbers(int& n1, int& n2) {

	cout << " enter a number 1\n";
	cin >> n1;
	cout << " enter a number 1\n";
	cin >> n2;
}
int MaxNumber(int n1, int n2) {
	if (n1 > n2)
		return n1;
	else
		return n2;
}
void printmaxNumber(int max) {

	cout << " the max number is \n " <<max;

}
int main()
{
	int n1, n2;
	ReadNumbers(n1, n2);
	printmaxNumber(MaxNumber(n1, n2));
	 system("pause"); 

}
