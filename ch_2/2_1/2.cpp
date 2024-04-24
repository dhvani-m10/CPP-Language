#include <iostream>
#include "class2.cpp"

using namespace std;

int main()
{
    Car c1, c2, c3, c4;

    cout << "*Enter car 1 : "<< endl;
    c1.setCarDetails();
    cout << "*Enter car 2 : "<< endl;
    c2.setCarDetails();
    cout << "*Enter car 3 : "<< endl;
    c3.setCarDetails();
    cout << "*Enter car 4 : "<< endl;
    c4.setCarDetails();

    cout << "==>Car 1 : ";
    c1.getCardetails();
    cout << "==>Car 2 : ";
    c2.getCardetails();
    cout << "==>Car 3 : ";
    c3.getCardetails();
    cout << "==>Car 4 : ";
    c4.getCardetails();

    return 0;
}
