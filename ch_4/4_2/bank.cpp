#include <iostream>

using namespace std;

class RBI
{
protected:
  protected:
    float rate = 6.5;

    public:
    void getROI()
    {
        cout << "RBI Rate of Interest : " <<rate <<endl;
    }
};

class SBI : public RBI
{
public:
    public:
    void getROI()
    {
        cout << "SBI Rate of Interest : " <<rate + 1 <<endl;
    }
};

class BOB : public RBI
{
public:
   public:
    void getROI()
    {
        cout << "BOB Rate of Interest : " <<rate + 1.25 <<endl;
    }
};

class ICICI : public RBI
{
public:
    public:
    void getROI()
    {
        cout << "ICICI Rate of Interest : " <<rate + 1.5 <<endl;
    }
};
