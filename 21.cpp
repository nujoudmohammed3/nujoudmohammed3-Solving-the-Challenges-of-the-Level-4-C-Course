//مساحة محيط الدائرة
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
float ReadNumbers()
{
	float R;
	cout << " enter a circumference ? \n ";
	cin >> R;
	return R;
}
float CircleArea(float n1) {
	const float PI = 3.1415926553589793238;
	float Area =  pow(n1, 2) / (PI * 4);
	return Area;
}
void  printPesults(float Area)
{
	cout << " \n Circle  Area = " << Area << endl;
}
int main()
{

	printPesults(CircleArea(ReadNumbers()));
	 system("pause"); 
}