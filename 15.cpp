// برنامج لحساب مساحة مستطيل 
#include <iostream>
using namespace std;
void ReadNumbers(float& n1, float& n2)
{
	cout << " enter a number 1? \n ";
	cin >> n1;
	cout << " enter a number 2? \n ";
	cin >> n2;
}
float CalculateRectangleArea(float n1, float n2) {
	return n1 * n2;
}
void  printPesults(float Area)
{
	cout << " \n Rectangle Area = " << Area << endl;
}
int main()
{
	float n1, n2;
	ReadNumbers(n1, n2);
	printPesults(CalculateRectangleArea(n1, n2));
	 system("pause"); 
}
