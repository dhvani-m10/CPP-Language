#include <iostream>
using namespace std;

class Admin
{
    string company_name;
    int manager_salary, employee_salary;
    
public:
    void setAdmin()
    {
        cout << "Enter The Name Of The Company : ";
        cin >> company_name;
        cout << "Enter the salary of the manager : ";
        cin >> manager_salary;
        cout << "Enter the salary of the employee : ";
        cin >> employee_salary;
    }
    void getAdmin()
    {
        cout << "=>The Name Of The Company : " << company_name << endl;
        cout << "=>The salary of the manager : " << manager_salary << endl;
        cout << "=>The salary of the employee : " << employee_salary << endl;
    };
};

    class Manager : public Admin
    {
    protected:
        int total_staff, total_annual_revenue;

    public:
        void setData()
        {
            cout << "Total staff of the company:  ";
            cin >> total_staff;
            cout << "Total the total annual revenue of the company :- ";
            cin >> total_annual_revenue;
        }
        void GetData()
        {
            cout << "=>The quantity of the staff : " << total_staff << endl;
            cout << "=>The total annual revenue of the company : " << total_annual_revenue << endl;
        }
    };

    class Employee : public Manager
    {
    protected:
        char can_terminate;

    public:
        void setD()
        {
            cout << "Does compnay terminated or not : ";
            cin >> can_terminate;
            cout << "-----------------------------------------------" << endl;
        }
        void getD()
        {
            cout << "=>compnay terminated or not : " << can_terminate << endl;
            cout << "-----------------------------------------------" << endl;
        }
    };