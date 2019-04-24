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

double corgrn()
{
	double grn;
	cout << "Enter correct grn ( >= 0 , !=abc) ";
	while (true)
	{
		cin >> grn;
		if (!cin || grn <= 0)
		{
			cin.clear();
			cout << "Incorect input\n";
			while (cin.get() != '\n')
			{
				continue;
			}
			continue;
		}
		break;
	}
	return grn;
}