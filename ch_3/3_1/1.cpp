#include "class1.cpp"

int main()
{
    Student s1, s2, s3, s4, s5;
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_college;


    cout << "*STUDENT DETAILS NO : 1" << endl;
    s1.StudentDetails();
    s1.setStudentDetails(stu_id,stu_name,stu_age,stu_course,stu_city,stu_email,stu_college);
    s1.getStudentID();
    s1.getStudentName();
    s1.getStudentAge();
    s1.getStudentCourse();
    s1.getStudentCity();
    s1.getStudentEmail();
    s1.getStudentCollege();
    cout << "*STUDENT DETAILS NO : 2" << endl;
    s2.StudentDetails();
    s2.setStudentDetails(stu_id,stu_name,stu_age,stu_course,stu_city,stu_email,stu_college);
    s2.getStudentID();
    s2.getStudentName();
    s2.getStudentAge();
    s2.getStudentCourse();
    s2.getStudentCity();
    s2.getStudentEmail();
    s2.getStudentCollege();
    cout << "*STUDENT DETAILS NO : 3" << endl;
    s3.StudentDetails();
    s3.setStudentDetails(stu_id,stu_name,stu_age,stu_course,stu_city,stu_email,stu_college);
    s3.getStudentID();
    s3.getStudentName();
    s3.getStudentAge();
    s3.getStudentCourse();
    s3.getStudentCity();
    s3.getStudentEmail();
    s3.getStudentCollege();
    cout << "*STUDENT DETAILS NO : 4" << endl;
    s4.StudentDetails();
    s4.setStudentDetails(stu_id,stu_name,stu_age,stu_course,stu_city,stu_email,stu_college);
    s4.getStudentID();
    s4.getStudentName();
    s4.getStudentAge();
    s4.getStudentCourse();
    s4.getStudentCity();
    s4.getStudentEmail();
    s4.getStudentCollege();
    cout << "*STUDENT DETAILS NO : 5" << endl;
    s5.StudentDetails();
    s5.setStudentDetails(stu_id,stu_name,stu_age,stu_course,stu_city,stu_email,stu_college);
    s5.getStudentID();
    s5.getStudentName();
    s5.getStudentAge();
    s5.getStudentCourse();
    s5.getStudentCity();
    s5.getStudentEmail();
    s5.getStudentCollege();

    cout << "==>STUDENT : 1" << endl;
    s1.displayStudentdetails();
    cout << "==>STUDENT : 2" << endl;
    s2.displayStudentdetails();
    cout << "==>STUDENT : 3" << endl;
    s3.displayStudentdetails();
    cout << "==>STUDENT : 4" << endl;
    s4.displayStudentdetails();
    cout << "==>STUDENT : 5" << endl;
    s5.displayStudentdetails();

    return 0;
}