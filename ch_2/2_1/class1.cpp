#include <iostream>

using namespace std;

class Employee
{
    int n;
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    int emp_salary;
    string emp_city;
    int emp_experience;
    string emp_company_name;

public:
    void setEmployeeDetails()
    {

        cout << "Enter Employee id : ";
        cin >> emp_id;
        cout << "Enter Employee name : ";
        cin >> emp_name;
        cout << "Enter Employee age : ";
        cin >> emp_age;
        cout << "Enter Employee Role : ";
        cin >> emp_role;
        cout << "Enter Employee salary : ";
        cin >> emp_salary;
        cout << "Enter Employee City : ";
        cin >> emp_city;
        cout << "Enterb Employee Experience : ";
        cin >> emp_experience;
        cout << "Enter Employee company name : ";
        cin >> emp_company_name;
    }

    void getEmployeedetails()
    {
        cout << "\nEMP_ID : " << emp_id << endl;
        cout << "EMP_NAME : " << emp_name << endl;
        cout << "EMP_AGE : " << emp_age << endl;
        cout << "EMP_ROLE : " << emp_role << endl;
        cout << "EMP_SALARY : " << emp_salary << endl;
        cout << "EMP_CITY : " << emp_city << endl;
        cout << "EMP_EXPERIENCE : " << emp_experience << endl;
        cout << "EMP_COMPANY_NAME : " << emp_company_name << endl;
    }
};
