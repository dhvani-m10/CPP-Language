#include <iostream>

using namespace std;

int numberOfCafe()
{
    int n;
    cout << "Enter Cafe you want to enter : ";
    cin >> n;

    return n;
}

class Cafe
{
    int cafe_id;
    static int id;
    string cafe_name;
    string cafe_type;
    int cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    Cafe()
    {
        cafe_id = id++;
        cout << "Enter Cafe Name : ";
        cin >> cafe_name;
        cout << "Enter Cafe Type : ";
        cin >> cafe_type;
        cout << "Enter Cafe Rating : ";
        cin >> cafe_rating;
        cout << "Enter Cafe Location(in city) : ";
        cin >> cafe_location;
        cout << "Enter Cafe Established year : ";
        cin >> cafe_establish_year;
        cout << "Enter Cafe Staff quantity : ";
        cin >> cafe_staff_quantity;

        cout << "Cafe " << cafe_id << " instanciated" << endl;
    }

    ~Cafe()
    {
        this->getCafeData();
        cout << "cafe " << cafe_id << " is destroyed..." << endl;
    }

    void getCafeData()
    {
        cout << "\nID : " << cafe_id << endl;
        cout<<"NAME : "<<cafe_name<<endl;
        cout << "TYPE : " << cafe_type << endl;
        cout << "RATING : " << cafe_rating << endl;
        cout << "LOCATION : " << cafe_location << endl;
        cout << "ESTABLISHED YEAR : " << cafe_establish_year << endl;
        cout << "STAFF QUANTITY : " << cafe_staff_quantity << endl;
    }
};

int Cafe::id = 101;
