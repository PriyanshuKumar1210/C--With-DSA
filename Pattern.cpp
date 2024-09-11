#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    for (int i = 1; i <= 4; i++)
    {
        
            for (int k = (n - i); k > 1; k--)
            {
                cout << "  ";
            }

            for (int j = 1; j < 2 * i; j++)
            {
                cout << "*";
            }
    
        cout << endl;

    }
  
         for (int i = 3; i >= 1; i--)
    {
        
            for (int k = (n - i); k > 1; k--)
            {
                cout << "  ";
            }

            for (int j = 1; j < 2 * i; j++)
            {
                cout << "*";
            }
            cout<<"\n";
    }

        cout << "\n";
    
}