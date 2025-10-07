//مساحة الدائرة داخل مثلث

#include <iostream>
using namespace std;
void ReadTRiangleData(float& A, float& B)
{
	cout << " Please enter Triangle side A ?\n ";
	cin >> A;
	cout << " Please enter Triangle base A ?\n ";
	cin >> B;
}
float circleAreaByTriangle(float A, float B) {
	float Area = (3, 14) * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
	return Area;
}
void PrintResult(float Area) {
	cout << " Circle Area =" << Area << endl;
}
int main()
{
	float A, B;
	ReadTRiangleData(A, B);
	PrintResult(circleAreaByTriangle(A, B));
}

