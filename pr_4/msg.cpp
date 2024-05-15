#include<iostream>
using namespace std;

class message
{
    protected:
    string message;


    public:
    void print()
    {
        message="hello,";
        cout<<message<<endl;
    }
    void print(string msg1)
    {
        cout<<message<<" "<<msg1<<endl;
    }
};