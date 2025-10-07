
#include <iostream>
using namespace std;
void ReadNumbers(int& n1, int& n2)
{
	cout << " enter a number 1? \n ";
	cin >> n1;
	cout << " enter a number 2? \n ";
	cin >> n2;
}
void swap(int& n1, int& n2) {
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}
void printnumber(int n1 , int n2) {
	cout << " number 1 is " << n1 << endl;
	cout << " number  2 is " << n2 << endl;

}
int main()
{
	int n1, n2;
	ReadNumbers(n1, n2);
	printnumber(n1, n2);
	swap(n1, n2);
	printnumber(n1, n2);
	 system("pause"); 

}
