#include <iostream>
#include <sstream>
#include <string>
#include <Windows.h>
using namespace std;
char* RUS(const char* str)
{
	static char buf[BUFSIZ];
	OemToCharA(str, buf);
	return buf;
}
int main() {
	setlocale(LC_CTYPE, "Russian");
	int a,b;
	cout << "������� �: ";
	cin >> a;
	cout << "�� ����� ����� ����� �: ";
	cin >> b;
	cout << "�������: " << a % b << "\n������� ������: " << a / b;
	return 0;
}
