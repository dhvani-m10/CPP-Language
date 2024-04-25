#include <iostream>

using namespace std;

int numberOfHotel()
{
    int n;
    cout << "Enter hotel you want to enter : ";
    cin >> n;

    return n;
}

class Hotel
{

    int hotel_id; //
    static int id;
    static string hotel_name; //
    string hotel_type;
    int hotel_rating;
    string hotel_location;    //
    static int hotel_establish_year; //
    int hotel_staff_quantity;
    int hotel_room_quantity;

public:
    void setHotelDetails()
    {
        hotel_id = id++;
        cout << "Enter Hotel type : ";
        cin >> hotel_type;
        cout << "Enter Hotel rating : ";
        cin >> hotel_rating;
        cout << "Enter Hotel Location : ";
        cin >> hotel_location;
        cout << "Enter Hotel staff  Quantity: ";
        cin >> hotel_staff_quantity;
        cout << "Enter Hotel Room Quantity : ";
        cin >> hotel_room_quantity;
    }

    void getHotelDetails()
    {
        cout << "\nID : " << hotel_id << endl;
        cout << "NAME : " << hotel_name << endl;
        cout << "TYPE : " << hotel_type << endl;
        cout << "RATING : " << hotel_rating << endl;
        cout << "LOCATION : " << hotel_location << endl;
        cout << "ESTABLISHED YEAR : " << hotel_establish_year << endl;
        cout << "STAFF QUANTITY : " << hotel_staff_quantity << endl;
        cout << "ROOM QUANTITY : " << hotel_room_quantity << endl;
    }
};

string Hotel::hotel_name = "Genius Hotel";
int Hotel::id = 111;
int Hotel::hotel_establish_year = 2010;
