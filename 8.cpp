

#include <iostream>
#include<string>
using namespace std;
enum enPassFail { Pass = 1 ,Fail=0 };
int ReadMark() {
	int mark;
	cout << "Enter your mark \n ";
	cin >> mark;
	return mark;
}
enPassFail CeckMark(int mark) {
	if (mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}
void printResult(int mark)
{
	if (CeckMark(mark) == enPassFail::Pass)
		cout << "You Pass \n";
	else
		cout << " You faild \n";
}
int main()
{
	printResult(ReadMark());
     system("pause"); 
}
