#include <iostream>

using namespace std;

class Number
{
protected:
    int n;

public:
    void setNum()
    {
        cout << "Enter any number : ";
        cin>>n;
    }
};

class Square : public Number
{
    public:
    void getSquare(){
        cout<<"=>Square of "<<n<<" is : "<<n*n<<endl;
    }
};

class Cube : public Number
{
    public:
    void getCube(){
        cout<<"=>Cube of "<<n<<" is : "<<n*n*n<<endl;
    }
};