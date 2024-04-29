#include <iostream>

using namespace std;

class Student
{
private:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_college;

public:
    void StudentDetails()
    {
        cout << "Enter Student ID : ";
        cin >> stu_id;
        cout << "Enter Student Name : ";
        cin >> stu_name;
        cout << "Enter Student Age : ";
        cin >> stu_age;
        cout << "Enter Student Course : ";
        cin >> stu_course;
        cout << "Enter Student City : ";
        cin >> stu_city;
        cout << "Enter Student Email : ";
        cin >> stu_email;
        cout << "Enter Student College : ";
        cin >> stu_college;
 }

    void setStudentDetails(int stu_id,string stu_name,int stu_age,string stu_course,string stu_city,string stu_email,string stu_college)
    {
        this->stu_id =stu_id;
        this->stu_name = stu_name;
        this->stu_age = stu_age;
        this->stu_course = stu_course;
        this->stu_city = stu_city;
        this->stu_email = stu_email;
        this->stu_college = stu_college;
    }

    int getStudentID()
    {
        return stu_id;
    }

    string getStudentName()
    {
        return stu_name;
    }

    int getStudentAge()
    {
        return stu_age;
    }

    string getStudentCourse()
    {
        return stu_course;
    }

    string getStudentCity()
    {
        return stu_city;
    }

    string getStudentEmail()
    {
        return stu_email;
    }

    string getStudentCollege()
    {
        return stu_college;
    }

    void displayStudentdetails()
    {
        cout << "STUDENT ID : " << stu_id << endl;
        cout << "NAME :" << stu_name << endl;
        cout << "AGE : " << stu_age << endl;
        cout << "COURSE : " << stu_course << endl;
        cout << "CITY : " << stu_city << endl;
        cout << "EMAIL : " << stu_email << endl;
        cout << "COLLEGE : " << stu_college << endl;
    }
};