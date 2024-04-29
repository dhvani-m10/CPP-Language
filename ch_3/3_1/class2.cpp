#include <iostream>

using namespace std;

class Customer
{
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    long int cust_mobile_number;
    int cust_simcard_validity;
    string cust_telecom_brand_name;

public :
    void CustomerDetails()
    {
        cout << "Enter Customer ID : ";
        cin >> cust_id;
        cout << "Enter Customer Name : ";
        cin >> cust_name;
        cout << "Enter Customer Age : ";
        cin >> cust_age;
        cout << "Enter Customer City : ";
        cin >> cust_city;
        cout << "Enter Customer Mobile number : ";
        cin >> cust_mobile_number;
        cout << "Enter Customer SIM validity : ";
        cin >> cust_simcard_validity;
        cout << "Enter Customer Telecom brand name : ";
        cin >> cust_telecom_brand_name;
    }

    void setCustomerDetails(int cust_id, string cust_name, int cust_age, string cust_city, long int cust_mobile_number, int cust_simcard_validity, string cust_telecom_brand_name)
    {
        this->cust_id = cust_id;
        this->cust_name = cust_name;
        this->cust_age = cust_age;
        this->cust_city = cust_city;
        this->cust_mobile_number = cust_mobile_number;
        this->cust_simcard_validity = cust_simcard_validity;
        this->cust_telecom_brand_name = cust_telecom_brand_name;
    }

    int getcustomerid()
    {
        return cust_id;
    }

    string getcustomername()
    {
        return cust_name;
    }

    int getcustomerage()
    {
        return cust_age;
    }

    string getcustomercity()
    {
        return cust_city;
    }

     long int getcustomermobileNo()
    {
        return cust_mobile_number;
    }

    int getcustSimvalidity()
    {
        return cust_simcard_validity;
    }

    string getcustTelecomBrand()
    {
        return cust_telecom_brand_name;
    }

    void displayCustomerdetails()
    {
        cout << "CUSTOMER ID : " << cust_id << endl;
        cout << "NAME :" << cust_name << endl;
        cout << "AGE : " << cust_age << endl;
        cout << "CITY : " << cust_city << endl;
        cout << "MOBILE NUMBER: " << cust_mobile_number << endl;
        cout << "SIMCARD VALIDITY: " << cust_simcard_validity << endl;
        cout << "TELECOM BRAND NAME : " << cust_telecom_brand_name << endl;
    }
};