#include <iostream>
using namespace std;

class Calculator
{
protected:
    int a, b;

public : 
    Calculator()
    {
        cout << "Enter A : ";
        cin >> a;
        cout << "Enter B : ";
        cin >> b;

        try
        {
            if (b == 0)
            {
                throw 0;
            }
            else
            {
                cout << "THE ANSWER IS : " << (a / b) << endl;
            }
        }
        catch (int n)
        {
            cout << "Cannot divide by 0!!" << endl;
        }
    }
};

int main()
{

    Calculator c;

    
    return 0;
}