#include <iostream>
#include <iomanip>
using namespace std;
void buildStairs(int height, int choice);
void buildPyramide(int height, int choice2);

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
switch (choice)
{
case 1:
buildStairs(height, choice);
break;
case 2:
buildPyramide(height, choice);
break;
default:
cout << "Incorrect\n";
break;
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
