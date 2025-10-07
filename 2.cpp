

#include <iostream>
#include<string>
using namespace std;
string ReadName() {
    string name;
    cout << "Please Enter Your Name ?\n";
    getline(cin, name);
     return name;

}
void PrintName(string name) {
    cout << " Your Name Is " << name << endl;

}
int main()
{
    PrintName(ReadName());
    system("pause");
}
