#include"operator.cpp"

int main()
{
    Number n1, n2;
    n1.set();
    n2.set();
    if(n1 < n2){
        cout << " n2 is Maximum...";
    }
    else{
        cout << " n1 is Maximum...";
    }
    return 0;
}