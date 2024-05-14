#include<iostream>
using namespace std;

class Number{
    public:
        int a;

        void set(){
            cout << "Enter Number : "; cin >> a;
        }
        bool operator<(Number n2){
            if (a < n2.a)
            {
                return true;
            }
            else{
                return false;
            }
        }
};
