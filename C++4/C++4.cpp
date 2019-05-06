#include <iostream>
#include <string>
#include "Windows.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	string a;
	cin >> a;
	string b;
	cin >> b;
	string c = a + b;
	cout << c;
}

