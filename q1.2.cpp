#include<iostream>

using namespace std;

int main ()
{
    int A[10][10];												//declaration
	int m, n, i, j;				
    
    cout << "ORAL ASSESSMENT 1.2 (ARRAY)" << endl << endl;
    
    cout << "Enter rows of matrix: ";
    cin >> m;
    cout << "Enter columns of matrix: ";
    cin >> n;
    
    cout << endl;
    
    cout << "Enter matrix values" << endl;
    for (i = 0; i < m; i++)									//for values in array box
    {
        for (j = 0; j < n; j++)
        {	
        	cout << "Matrix value " << j + 1 << ": ";
            cin >> A[i][j];
        }
        cout << endl;
    }
    
    system("CLS"); 					//clear screen
    
    cout << "ORAL ASSESSMENT 1.2 (ARRAY)" << endl << endl;
            
    cout << "Matrix" << endl;							//display
    for (i = 0; i < m; i++)
    { 
        for (j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";						//display normal array
            
        }
		cout << endl;
    }
    
    cout << "Transpose of Matrix" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)							//display transposed array
        {
            cout << A[j][i] << " ";
        	
    	}
		cout << endl;
    }
    return 0;
}
