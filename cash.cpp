#include <iostream>
using namespace std;
double corgrn();
int main()
{
	
	system("pause");
	return 0;
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