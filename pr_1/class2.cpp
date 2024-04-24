
#include <iostream>

using namespace std;

class Time {
int sec;
int hour,minutes,second;

public: 
    void readTime() {
        cout << "Enter Seconds : ";
        cin >> sec;
    }

    void sum(){
         hour=sec/3600;
         minutes=(sec-3600)/60;
         second=(sec-3600-60)%60;  //sec%60
    }

    void DisplayTime(){
        cout<<"Time  : "<<hour<<":"<<minutes<<":"<<second;
    }
};