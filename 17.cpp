// مساحة مثلث

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
void ReadNumbers(float& n1, float& n2)
{
	cout << " enter a number 1? \n ";
	cin >> n1;
	cout << " enter a number 2? \n ";
	cin >> n2;
}
float TriangleArea(float n1, float n2) {
	float Area = (n1 / 2) * n2;
	return Area;
}
void  printPesults(float Area)
{
	cout << " \n Rectangle Area = " << Area << endl;
}
int main()
{
	float n1, n2;
	ReadNumbers(n1, n2);
	printPesults(TriangleArea(n1, n2));
	 system("pause"); 
}