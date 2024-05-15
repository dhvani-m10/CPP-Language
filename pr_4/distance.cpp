#include <iostream>
using namespace std;

class Distance
{

private:
    int km;
    int meter;

public:
    void setKm()
    {
        cout << "Enter Km : ";
        cin >> km;
    }

    void setMeter()
    {
        cout << "Enter Meter : ";
        cin >> meter;
    }

    Distance operator+(Distance input2)
    {
        Distance res;

        res.km = km + input2.km;
        res.meter = meter + input2.meter;
        
        if (meter >= 1000)
        {
            // km += 1;
            res.km +=res.meter/ 1000;
            res.meter %= 1000;
        }

        return res;
    }

    void getData()
    {
        cout << "Km: " << km << ", Meter: " << meter << endl;
    }
};
