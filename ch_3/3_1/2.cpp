#include "class2.cpp"

int main()
{

    Customer c1, c2, c3, c4, c5;

    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    long int cust_mobile_number;
    int cust_simcard_validity;
    string cust_telecom_brand_name;

    cout << "*CUSTOMER DETAILS NO : 1" << endl;
    c1.CustomerDetails();
    c1.getcustomerid();
    c1.getcustomername();
    c1.getcustomerage();
    c1.getcustomercity();
    c1.getcustomermobileNo();
    c1.getcustSimvalidity();
    c1.getcustTelecomBrand();
    cout << "*CUSTOMER DETAILS NO : 2" << endl;
    c2.CustomerDetails();
    c2.getcustomerid();
    c2.getcustomername();
    c2.getcustomerage();
    c2.getcustomercity();
    c2.getcustomermobileNo();
    c2.getcustSimvalidity();
    c2.getcustTelecomBrand();
    cout << "*CUSTOMER DETAILS NO : 3" << endl;
    c3.CustomerDetails();
    c3.getcustomerid();
    c3.getcustomername();
    c3.getcustomerage();
    c3.getcustomercity();
    c3.getcustomermobileNo();
    c3.getcustSimvalidity();
    c3.getcustTelecomBrand();
    cout << "*CUSTOMER DETAILS NO : 4" << endl;
    c4.CustomerDetails();
    c4.getcustomerid();
    c4.getcustomername();
    c4.getcustomerage();
    c4.getcustomercity();
    c4.getcustomermobileNo();
    c4.getcustSimvalidity();
    c4.getcustTelecomBrand();
    cout << "*CUSTOMER DETAILS NO : 5" << endl;
    c5.CustomerDetails();
    c5.getcustomerid();
    c5.getcustomername();
    c5.getcustomerage();
    c5.getcustomercity();
    c5.getcustomermobileNo();
    c5.getcustSimvalidity();
    c5.getcustTelecomBrand();

    cout << "==>CUSTOMER : 1" << endl;
    c1.displayCustomerdetails();
    cout << "==>CUSTOMER : 2" << endl;
    c2.displayCustomerdetails();
    cout << "==>CUSTOMER : 3" << endl;
    c3.displayCustomerdetails();
    cout << "==>CUSTOMER : 4" << endl;
    c4.displayCustomerdetails();
    cout << "==>CUSTOMER : 5" << endl;
    c5.displayCustomerdetails();

    return 0;
}
