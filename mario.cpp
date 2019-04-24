#include <iostream>
#include <iomanip>
using namespace std;
void buildStairs(int height, int choice);
void buildPyramide(int height, int choice2);
//функції для пірамід
int main()
{
int height, choice;
cout << "Enter height:";
while (!(cin >> height)) {
cin.clear();
fflush(stdin);
cout << "Enter height:";
}
cout << "Choose 1 or 2 :";
cin >> choice;
cout << endl;
//ввід висоти

switch (choice)
{
case 1:
buildStairs(height, choice);
//1 піраміда(сходи)
break;
case 2:
buildPyramide(height, choice);
break;
default:
cout << "Incorrect\n";
break;
//друга піраміда
}
system("pause");
return 0;
}
void buildStairs(int height, int choice)
{
for (int i = 0; i < height; i++)
{
for (int j = i; j < height - 1; j++)
cout << " ";
for (int j = 0; j <= i; j++)
cout << "#";
cout << endl;
}
}
//функція першої піраміди(сходів)

void buildPyramide(int height, int choice2)
{
for (int i = 0; i < height; i++)
{
for (int j = i; j < height - 1; j++)
cout << " ";
for (int j = 0; j <= i; j++)
cout << "#";
cout << " ";
for (int j = 0; j <= i; j++)
cout << "#";
for (int j = i; j < height - 1; j++)
cout << " ";
cout << endl;
}
}
//функція другої піраміди