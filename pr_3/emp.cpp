#include <iostream>

using namespace std;

class A
{
protected:
    int id;
    string name;
    string role;
    int salary;
    int experience;
    string comp_name;
    string address;
    string email;
    long contact;

public:
    void setA()
    {
        cout << "Enter ID : ";
        cin >> id;

        cout << "Enter Name : ";
        cin >> name;

        cout << "Enter Role : ";
        cin >> role;
    }
};

class B : public A
{
public:
    void setB()
    {
        cout << "Enter Salary : ";
        cin >> salary;

        cout << "Enter Experience : ";
        cin >> experience;
    }
};

class C : public B
{
public:
    void setC()
    {
        cout << "Enter Company Name  : ";
        cin >> comp_name;

        cout << "Enter Address : ";
        cin >> address;
    }

    void getC()
    {
        cout << "=>NAME : " << name << endl;
        cout << "=>ROLE : " << role << endl;
        cout << "=>SALARY : " << salary << endl;
    }
};

class D : public C
{

public:
    void setD()
    {
        cout << "Enter Email : ";
        cin >> email;

        cout << "Enter Contact : ";
        cin >> contact;
    }

    void getD()
    {
        cout << "=>ID : " << id << endl;
        cout << "=>NAME : " << name << endl;
        cout << "=>ROLE : " << role << endl;
        cout << "=>SALARY : " << salary << endl;
        cout << "=>EXPERIENCE : " << experience << endl;
        cout << "=>COMPANY NAME : " << comp_name << endl;
        cout << "=>ADDRESS : " << address << endl;
        cout << "=>EMAIL : " << email << endl;
        cout << "=>CONTACT : " << contact << endl;
    }
};