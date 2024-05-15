#include"msg.cpp"

int main()
{
    message m1;
    m1.print();

    message m2;
    m2.print();

    m1.print("World!");
    m2.print(" World from Space!!");

    return 0;
}