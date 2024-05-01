#include <iostream>

using namespace std;

class X
{

protected:
    int a;
    int b;
    int c;
};

class Y : public X
{
public:
    void setData()
    {
        cout << "Enter a : ";
        cin >> a;
        cout << "Enter b : ";
        cin >> b;
        cout << "Enter c : ";
        cin >> c;
    }

    void getData()
    {
        cout << "A : " << a << endl;
        cout << "B : " << b << endl;
        cout << "C : " << c << endl;
    }

    void getCube()
    {
        cout<<"*****CUBE*****"<<endl;
        cout << "Cube of A : " << a * a * a << endl;
        cout << "Cube of B : " << b * b * b << endl;
        cout << "Cube of C : " << c * c * c << endl;
    }

    void getsum()
    {
        cout<<"*****SUM*****"<<endl;
        cout << "Sum of all cubes : " << a * a * a + b * b * b + c * c * c << endl;
    }
};