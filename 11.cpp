

#include <iostream>
#include<string>
using namespace std;
enum enPassFail { Pass = 1, Fail = 0 };
void Readnum(int& n1, int& n2, int& n3)
{
	cout << " enter a number 1 \n ";
	cin >> n1;
	cout << " enter a number 2 \n ";
	cin >> n2;
	cout << " enter a number 3 \n ";
	cin >> n3;
}
int sum3number(int n1, int n2, int n3)
{
	return  n1 + n2 + n3;
}

float Average(int n1, int n2, int n3)
{
	return (float)sum3number(n1, n2, n3) / 3;
}
enPassFail CheckAverage(float average) {
	if (average >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}
void printResult(int  average)
{
	if (CheckAverage(average) == enPassFail::Pass)
		cout << "You Pass \n";
	else
		cout << " You faild \n";
}
int main() {
	int n1, n2, n3;
	Readnum(n1, n2, n3);
	printResult(Average(n1, n2, n3));


}