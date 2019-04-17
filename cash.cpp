#include <iostream>
using namespace std;
double corgrn();
void coins(double grn);

int main()
{
	double grn;
	grn = corgrn();
	coins(grn);

	system("pause");
	return 0;
}
double corgrn()
{
	double grn;
	cout << "Enter correct grn ( >= 0 , !=abc)";
	do
	{
		cin >> grn;
		if ((grn >= 'a' && grn <= 'z') || (grn >= 'A' && grn <= 'Z') || grn <= 0)
		{
			cout << "Error!\n";
			return 0;
		}

		else if (grn >= 0)
			break;
	} while (true);
	return grn;
}
void coins(double grn)
{
	int amount25 = 0, amount5 = 0, amount10 = 0, amount2 = 0, amount1 = 0;
	int grn1 = (int)grn;
	double temp1 = grn - grn1;
	double coins;
	coins = temp1 * 100;
	int coinsall = (grn1 * 100) + coins;
	int temp2 = coinsall;
	int temp3 = 0;
	int temp;
	amount25 = coinsall / 25;
	cout << "n25 = " << amount25 << endl;

	temp = amount25 * 25;
	temp3 += temp;
	coinsall = coinsall - temp;
	amount10 = coinsall / 10;
	cout << "n10 = " << amount10 << endl;

	temp = amount10 * 10;
	temp3 += temp;
	coinsall = coinsall - temp;
	amount5 = coinsall / 5;
	cout << "n5 = " << amount5 << endl;

	temp = amount5 * 5;
	temp3 += temp;
	coinsall = coinsall - temp;
	amount2 = coinsall / 2;
	cout << "n2 = " << amount2 << endl;
	temp = amount2 * 2;
	temp3 += temp;

	coinsall = temp2 - temp3;
	while (true)
	{
		if (coinsall > 0)
		{
			amount1++;
			coinsall--;
		}
		else
		{
			break;
		}
	}
	cout << "n1 = " << amount1 << endl;
	return;
}

