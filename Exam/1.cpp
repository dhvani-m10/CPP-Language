#include <iostream>
using namespace std;

class Laptop
{
private:
    string name;
    int price;
    string processor;

public:
    Laptop(){
    }

    Laptop(string name, int price, string processor)
    {
        this->name = name;
        this->price = price;
        this->processor = processor;
    }


    void setLaptopDetails()
    {
        cout << "Enter Laptop Name : ";
        cin >> name;
        cout << "Enter the price of laptop : ";
        cin >> price;
        cout << "Enter Processor : ";
        cin >> processor;
    }

    void getLaptopDetails()
    {
        cout << endl
             << "=>LAPTOP NAME : " << name << endl;
        cout << "=>PRICE : " << price << endl;
        cout << "=>PROCESSOR : " << processor << endl;
    }
};


int main()
{
    Laptop l1;

    l1.setLaptopDetails();
    l1.getLaptopDetails();

    return 0;
}