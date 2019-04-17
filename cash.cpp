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

