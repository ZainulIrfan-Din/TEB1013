#include <iostream>

using namespace std;

int main()
{
int num, j=1, sum = 0;

cout << "Enter the number: ";
cin >> num;

while (j < num)
{
if ((num % j) == 0)
sum = sum + j;
j++;
}

cout << endl;

if (sum == num)
cout << j << " is a perfect number" << endl;

else
cout << j << " is not a perfect number" << endl;

return 0;
}
