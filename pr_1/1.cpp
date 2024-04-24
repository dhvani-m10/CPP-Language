#include <iostream>
#include"class1.cpp"

using namespace std;
int main(){

    Distance d1,d2;

    d1.readDistance();
    d2.readDistance();

    d1.add(d1,d2);

    d1.displayDistance();
    return 0;
}
