#include<iostream>
using namespace std;
class Shape
{
	public : 
	virtual void displayDetails()
	{
		cout<<"Hello";
	}
	
};
class Circle : public Shape
{
	public :
	virtual void displayDetails()
	{
		cout<<"Circle is round."<<endl;
	}
	
	
};
class Rectangle : public Shape
{
	public :
	virtual void displayDetails()
	{
		cout<<"This is Rectangle";
	}
	
	
};
main()
{
	
	Shape *s1[3];
	Circle c1;
	Rectangle r1;
	
	s1[0]=&c1;
	s1[1]=&r1;
	
	s1[0]->displayDetails();
	s1[1]->displayDetails(); 
	
}