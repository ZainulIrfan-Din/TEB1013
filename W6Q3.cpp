#include <iostream>

using namespace std;

int main()
{
int sum = 0;

for(int num = 1567; num <= 9876; num++)
{
if ((num % 7)== 0)
sum = sum + num;
}

cout << endl;	
cout << sum;

return 0;
}
