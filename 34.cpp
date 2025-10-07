//
//

#include <iostream>
using namespace std;

int ReadTotalsales() {
    int TotalSales;
    cout << " Please Enter a total salesz /\n";
    cin >> TotalSales;
    return TotalSales;
}
double GetComissionPercentage(double TotalSales) {
    if (TotalSales >= 1000000)
        return 0.01;
    else if (TotalSales >= 500000)
        return 0.02;
    else if (TotalSales >= 100000)
        return 0.03;
    else if (TotalSales >= 50000)
        return 0.05;
    else
    return 0.00; 
}

double CalculateTotalComission(double TotalSales) {
  
    return GetComissionPercentage( TotalSales)* TotalSales;
}

int main() {
    double TotalSales = ReadTotalsales(); 
    cout << endl << "Comission percentage = " << GetComissionPercentage(TotalSales) << endl;
    cout << endl << "Total Comission = " << CalculateTotalComission(TotalSales) << endl;
    system("pause"); 
    return 0;
}
