
#include <iostream>
#include <string>
using namespace std;

struct pyBankContents {
    int Pennies, Nickels, Dimes, Quarters, Dollars;
};

pyBankContents ReadPzgyBankContents() {
    pyBankContents PzgyBankContents;
    cout << "Enter total Pennies: ";
    cin >> PzgyBankContents.Pennies;
    cout << "Enter total Nickels: ";
    cin >> PzgyBankContents.Nickels;
    cout << "Enter total Dimes: ";
    cin >> PzgyBankContents.Dimes;
    cout << "Enter total Quarters: ";
    cin >> PzgyBankContents.Quarters;
    cout << "Enter total Dollars: ";
    cin >> PzgyBankContents.Dollars;
    return PzgyBankContents;
}

int CalculateTotalPennies(pyBankContents PzgyBankContents) {
    int TotalPennies = 0;
    TotalPennies = PzgyBankContents.Pennies * 1 +
        PzgyBankContents.Nickels * 5 +
        PzgyBankContents.Dimes * 10 +
        PzgyBankContents.Quarters * 25 +
        PzgyBankContents.Dollars * 100;
    return TotalPennies;
}

int main() {
    pyBankContents bankContents = ReadPzgyBankContents();
    int TotalPennies = CalculateTotalPennies(bankContents);
    cout << "Total Pennies = " << TotalPennies << endl;
    cout << "Total Dollars = " << (float)TotalPennies / 100 << endl;
    system("pause"); 
    return 0;

}