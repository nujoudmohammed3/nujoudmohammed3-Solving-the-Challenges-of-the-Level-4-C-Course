// 
#include <iostream>
#include <string>
using namespace std;
int ReadNumber() {
	int n;
	cout << " enter a number ? \n";
	cin >> n;
	return n;
}
int SumOfOdd(int n)
{
	int sum = 0;

	for (int i = 0; n >= i; i++)
		if (i % 2 != 0)
		{
			 sum += i;

		}

	return sum;

}
int main()
{
	 cout<<SumOfOdd(ReadNumber());
	  system("pause"); 
}