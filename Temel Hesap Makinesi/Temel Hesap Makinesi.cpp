#include <iostream>
using namespace std;

int main()
{
	double num1, num2;

	double sonuc;

	char Operator;
	cout << "Hesap Makinesine Hosgeldiniz!" << endl;

	cout << "Birinci sayiyi girin: ";
	cin >> num1;
;

	cout << "Ikinci sayiyi girin: ";
	cin >> num2;

	cout << "Operatoru giriniz:" << endl;
	cin >> Operator;

	switch (Operator)
	{
	case '+':
		sonuc = num1 + num2;
		break;
	case '-':
		sonuc = num1 - num2;
		break;
	case '*':
		sonuc = num1 * num2;
		break;
	case '/':
		if (num2 == 0) {
			cout << "Sifira bolemezsiniz." << endl;
			return 0;
		}
		else
			sonuc = num1 / num2;
		break;
	default:
		cout << "Gecersiz Operator girdiniz." << endl;
		return 0;

	}
	cout << "Sonuc: " << sonuc;


	return 0;
}