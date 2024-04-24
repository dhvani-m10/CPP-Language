#include <iostream>

using namespace std;

int main()
{
    int fy, ey;

    cout << "Enter first number  :";
    cin >> fy;

    cout << "Enter second number :";
    cin >> ey;

    cout <<"The array is: ";
    for (int i = fy; i <ey; i++)
    {
        if (i % 4 == 0)
        {
            cout << i << ", ";
        }
    }

    return 0;
}