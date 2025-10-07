// المشكلة 13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include<string>
using namespace std;
void ReadNumbers(int& n1, int& n2 ,int &n3) {

	cout << " enter a number 1\n";
	cin >> n1;
	cout << " enter a number 1\n";
	cin >> n2;
	cout << " enter a number 1\n";
	cin >> n3;
}
int MaxNumber(int n1, int n2 ,int n3) {
	if (n1 > n2 && n1 > n3)
		return n1;
	else  if (n2 > n3)
		return n2;
	else
		return n3;
}
void printmaxNumber(int max) {

	cout << " the max number is \n " << max;

}
int main()
{
	int n1, n2,n3;
	ReadNumbers(n1, n2,n3);
	printmaxNumber(MaxNumber(n1, n2,n3));
 system("pause"); 
}
