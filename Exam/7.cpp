#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void startEngine()
    {
        cout << "Hello";
    }
    virtual void drive()
    {
        cout << "Drive" << endl;
    }
};

class Car : public Vehicle
{
    virtual void startEngine()
    {
        cout << "Starting the engine..." << endl;
    }

    virtual void drive()
    {
        cout << "Driving..." << endl;
    }
};

class Bike : public Vehicle
{
    virtual void startEngine()
    {
        cout << "Starting the engine..." << endl;
    }

    virtual void drive()
    {
        cout << "Driving..." << endl;
    }
};

int main()
{
    Vehicle *v1[3];
    Car c1;
    Bike b1;

    v1[0] = &c1;
    v1[1] = &c1;

    v1[0]->startEngine();
    v1[1]->drive();

    return 0;
}