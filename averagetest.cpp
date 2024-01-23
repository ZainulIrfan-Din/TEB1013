#include <iostream>

using namespace std;

int main()
{
    int test1, test2, avg;
    
    cout << "Please enter both of your tests.\n";
    cin >> test1 >> test2;
    cout << endl;
    
    avg = (test1 + test2) / 2;
    
    cout << "Your test average is " << avg << endl;
    

    return 0;
}