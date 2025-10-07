
#include <iostream>
#include<string>
using namespace std;
void Read3num(int& n1, int& n2, int& n3)
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
void PrintResult(int Total)
{
    cout << " the total sum of number is " << Total << endl;
}
int main()
{
    int n1, n2, n3;
    Read3num(n1, n2, n3);
    PrintResult(sum3number(n1, n2, n3));
    system("pause");

    
}
