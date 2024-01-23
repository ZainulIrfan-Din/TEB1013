#include <iostream>

using namespace std;

int main()
{
int R1 = 0, R2 = 0, R3 = 0, R4 = 0;
int num;
int ctr = 1;

while (ctr <= 6)
{
cout << "Enter the value: ";
cin >> num;

if ((num >= 1) && (num <= 50))
R1++;

else if ((num >= 51) && (num <= 100))
R2++;

else if ((num >= 101) && (num <= 150))
R3++;

else if ((num >= 151) && (num <= 200))
R4++;

ctr++;

}

cout << endl;

cout << "Range 1-50: " << R1 << endl;
cout << "Range 51-100: " << R2 << endl;
cout << "Range 101-150: " << R3 << endl;
cout << "Range 151-200: " << R4 << endl;

return 0;
}
