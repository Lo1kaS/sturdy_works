#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int  A, B, C;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	cout << "C=";
	cin >> C;
	cout << "длина AC=" << abs(A - C) << endl;;
	cout << "длина BC=" << abs(B - C) << endl;
	cout << "ответ=" << abs(A-C) + abs(B - C);
}
