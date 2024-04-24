#include <iostream>

using namespace std;

class Distance {

    int f,i;

public: 
    void readDistance() {
        cout << "Enter feet: ";
        cin >> f;
        cout << "Enter inch: ";
        cin >> i;
    }

   void add(Distance d1,Distance d2){
        f=d1.f+d2.f;
        i=d1.i+d2.i;

        if(i>=12){
            f+=i/12;
            i%=12;
            
        }
   }
     void displayDistance() {
        cout << f << " feet " << i << " inch ";
    }
};
