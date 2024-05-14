#include <iostream>

using namespace std;

class Cricket
{
public:
    int getTotalOvers()
    {
        
    }
};

class T20Match : public Cricket
{
public:
    int getTotalOvers()
    {
        cout << "Total overs in T20 match : 20 " << endl;

    }
};

class TestMatch : public Cricket
{
public:
    int getTotalOvers()
    {
        cout << "Total overs in Test match: 90" << endl;
    }
};
