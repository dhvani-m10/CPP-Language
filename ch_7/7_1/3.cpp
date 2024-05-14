#include <iostream>

using namespace std;

int main()
{

    char pass[20];
    int count = 0;

    cout << "Enter Password : ";
    cin >> pass;

    cout << "Start...." << endl;

    try
    {
        if (count == 0)
        {
            for (int i = 0; pass[i] != NULL; i++)
            {
                if (pass[i] >= 'A' && pass[i] <= 'Z')
                {
                   throw 1;
                }
            }
             count++;
        }
        else
        {
            cout << "Your Password is validate!! " << endl;
        }
    }
    catch (int n)
    {
        cout << "Your password is not validated!!" << endl;
    }
    catch (...)
    {
        cout << "General Exception!";
    }

    cout << "End...." << endl;

    return 0;
}