#include <iostream>

using namespace std;

int numberOfCompany()
{
    int n;
    cout << "Enter Company you want to enter : ";
    cin >> n;

    return n;
}

class Company

{
    int comp_id;
    static int idcount;
    string comp_name;
    int comp_staff_quantity;
    int comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

public:
    Company()
    {
    }

    Company(int comp_id, string comp_name, int comp_staff_quantity, int comp_revenue, int comp_import_raw_diamonds, int comp_export_diamonds, string comp_ceo)
    {
        this->comp_id = comp_id;
        this->comp_name = comp_name;
        this->comp_staff_quantity = comp_staff_quantity;
        this->comp_revenue = comp_revenue;
        this->comp_import_raw_diamonds = comp_import_raw_diamonds;
        this->comp_export_diamonds = comp_export_diamonds;
        this->comp_ceo = comp_ceo;
    }

    void setCompanyDetails()
    {
        comp_id = idcount++;
        cout << "Enter Company Name : ";
        cin >> comp_name;
        cout << "Enter Company Staff quantity : ";
        cin >> comp_staff_quantity;
        cout << "Enter Company Revenue : ";
        cin >> comp_revenue;
        cout << "Enter Company Import raw diamond : ";
        cin >> comp_import_raw_diamonds;
        cout << "Enter Company Export diamonds : ";
        cin >> comp_export_diamonds;
        cout << "Enter Company CEO : ";
        cin >> comp_ceo;
    }

    ~Company()
    {
        this->getCompanyDetails();
        cout << "cafe " << comp_id << " is destroyed..." << endl;
    }

    void getCompanyDetails()
    {
        cout << "\nID : " << comp_id << endl;
        cout << "NAME : " << comp_name << endl;
        cout << "STAFF QUANTITY : " << comp_staff_quantity << endl;
        cout << "REVENUE : " << comp_revenue << endl;
        cout << "IMPORT DIAMOND : " << comp_import_raw_diamonds << endl;
        cout << "EXPORT DIAMOND : " << comp_export_diamonds << endl;
        cout << "COMPANY CEO : " << comp_ceo << endl;
    }
};

int Company::idcount = 101;
