#include <iostream>

using namespace std;

class Car
{
    int car_id;
    string car_company_name;
    string car_color;
    string car_model;
    int car_release_year;

    public:
    void setCarDetails()
    {

        cout << "Enter Car id : ";
        cin >> car_id;
        cout << "Enter Car company name : ";
        cin >> car_company_name;
        cout << "Enter Car colour : ";
        cin >> car_color;
        cout << "Enter Car Model : ";
        cin >> car_model;
        cout << "Enter Car release year : ";
        cin >> car_release_year;
       
    }

    void getCardetails()
    {
        cout << "\nCAR_ID : " << car_id << endl;
        cout << "CAR_COMPANY_NAME : " << car_company_name << endl;
        cout << "CAR_COLOR : " << car_color << endl;
        cout << "CAR_MODEL : " << car_model << endl;
        cout << "CAR_RELEASE_YEAR : " << car_release_year << endl;
    }
};