#include"overload.cpp"

int main() {
    B b1;
    b1.set();
    
    b1.calc(b1.a, b1.b);           
    b1.calc(b1.a, b1.b, b1.c);        
    b1.calc(b1.a, b1.b, b1.c, b1.d);      
    b1.calc(b1.a, b1.b, b1.c, b1.d, b1.e);   
    
    return 0;
}