#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int N, sot, des, ed;
	cout << "N=";
	cin >> N;
	sot = N / 100;
	des = N % 100 / 10;
	ed = N % 10;
	string a[] = {"сто", "двести", "триста", "четыреста","пятьсот","шестьсот","семьсот","восемьсот","девятьсот"};
	string b[] = {"двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят", "семьдесят", "восемьдесят", "девнясто"};
	string c[] = {"один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять"};
	string d[] = {"одиннадцать", "двенадцать","тринадцать","четырнадцать", "пятнадцать", "шестнадцать","семьнадцать","восемнадцать","девятнадцать"};
	cout << a[sot-1];
	if (des == 1)
	    cout << " " << d[ed-1];
	else if ((des == 0) && (ed != 0))
	    cout << " " << c[ed-1];
	else if ((ed == 0) && (des != 0))
	    cout << " " << b[des-2];
	else if ((ed == 0) && (des == 0))
	    ed = 0;
	else 
	    cout << " " << b[des-2] << " " << c[ed-1];
}
