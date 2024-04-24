#include <iostream>
#include "class1.cpp"

using namespace std;

int main()
{

    Employee e1, e2, e3, e4, e5;

    cout << "*Enter Employee 1 : " << endl;
    e1.setEmployeeDetails();
    cout << "*Enter Employee 2 : " << endl;
    e2.setEmployeeDetails();
    cout << "*Enter Employee 3 : " << endl;
    e3.setEmployeeDetails();
    cout << "*Enter Employee 4 : " << endl;
    e4.setEmployeeDetails();
    cout << "*Enter Employee 5 : " << endl;
    e5.setEmployeeDetails();

    cout << "==>Employee 1 : " << endl;
    e1.getEmployeedetails();
     cout << "==>Employee 2 : " << endl;
    e2.getEmployeedetails();
     cout << "==>Employee 3 : " << endl;
    e3.getEmployeedetails();
     cout << "==>Employee 4 : " << endl;
    e4.getEmployeedetails();
     cout << "==>Employee 5 : " << endl;
    e5.getEmployeedetails();

    return 0;
}