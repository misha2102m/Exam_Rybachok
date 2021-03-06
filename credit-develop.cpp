#include <iostream>
using namespace std;

void AlgorithmLuhn(long long& number);
bool IsCorrect(const long long& number);
int * FormArr(const long long& number);
int SumOdd(int* arr);
int SumEven(int* arr);
void IsValid(int sum);

int main()
{
	long long number;
	do
	{
		cout << "Enter 16-digits card number.\n";
		cin >> number;
		if (!IsCorrect(number))
		{
			cout << "Incorrect input.\n";
			continue;
		}
		break;
	} while (true);

	AlgorithmLuhn(number);

	system("pause");
	return 0;
}

void AlgorithmLuhn(long long& number)
{
	int* digits = FormArr(number);

	int sum = 0;
	sum += SumEven(digits);
	sum += SumOdd(digits);

	IsValid(sum);
}

bool IsCorrect(const long long& number)
{
	if (number / 10E14 < 1 || number / 10E14 > 9 || !cin)
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
		return false;
	}

	return true;
}

int * FormArr(const long long& number)
{
	int* digits = new int[16];
	long long temp = number;
	for (int i = 0; i < 16; i++, temp /= 10)
	{
		digits[i] = temp % 10;
		cout << digits[i];
	}
	cout << endl;

	return digits;
}

int SumOdd(int * arr)
{
	int sum = 0;
	for (int i = 0; i < 16; i += 2)
		sum += arr[i];

	return sum;
}

int SumEven(int * arr)
{
	int sum = 0;
	for (int i = 1; i < 16; i += 2)
	{
		if (arr[i] * 2 < 10)
			sum += arr[i] * 2;
		else
		{
			sum += (arr[i] * 2) % 10;//5
			sum += (arr[i] * 2) / 10;//0
		}
	}

	return sum;
}

void IsValid(int sum)
{
	cout << "Number of your card is " << (sum % 10 == 0 ? "" : "in") << "valid.\n";
}
