#include <iostream>

using namespace std;

int main()
{
    char pass[40];

    cout << "Enter a string: ";
    cin >> pass;

    try
    {
        for (int i = 0; pass[i] != '\0'; i++)
        {
            if ((pass[i] >= 'a' && pass[i] <= 'z'))
            {
                throw '1';
            }
        }

        cout << "Password is Validate." << endl;
    }
    catch (char c)
    {
        cout << "Password is not Validate" << endl;
    }

    return 0;
}