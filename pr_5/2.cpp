#include <iostream>

using namespace std;

int main()
{

    int age;

    cout << "Enter Age : ";
    cin >> age;

    cout << "Start...." << endl;

    try
    {
        if (age < 18)
        {
            throw 0;
        }
        else
        {
            cout << "You are eligible for vote!!" << endl;
        }
    }
    catch (int n)
    {
        cout << "You are not eligible for vote!!Wait until " << 18 - age << " Year" << endl;
    }
    catch (...)
    {
        cout << "General Exception!";
    }

    cout << "End...." << endl;

    return 0;
}