#include <iostream>

using namespace std;

int main()
{
int term;
int sum = 0;

for(int n = 1; n <= 100; n++)
{
term = 1 + (3*(n-1));
sum = sum + term;
}

cout << endl;
cout << "The sum of the arithmetic series: " << sum;

return 0;
}


