#include <iostream>

using namespace std;

int main()
{

    int a, b;

    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;

    cout << "Start...." << endl;

    try
    {
        if (b == 0)
        {
            throw 1;
        }
        else
        {
            cout << "Answer : " << a / b << endl;
        }
    }
    catch (double n)
    {
        cout << "Cannot divide by ZERO!!" << endl;
    }
    catch (...)
    {
        cout << "General Exception!" << endl;
    }

    cout << "End...." << endl;

    return 0;
}