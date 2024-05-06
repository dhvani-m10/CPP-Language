#include <iostream>

using namespace std;

int numberOfTrain()
{
    int n;
    cout << "Enter Train Number you want to enter : ";
    cin >> n;

    return n;
}

class Train
{
    // private:
    int train_no;
    string train_name;
    string source;
    string destination;
    int train_time;

public:
    void setTrainDetails()
    {
        cout << "Enter Train number : ";
        cin >> train_no;
        cout << "Enter train name : ";
        cin >> train_name;
        cout << "Enter source : ";
        cin >> source;
        cout << "Enter Destination : ";
        cin >> destination;
        cout << "Enter Train time : ";
        cin >> train_time;
    }

    void printTrainDtails()
    {
        cout << "TRAIN NO : " << train_no << endl;
        cout << "NAME : " << train_name << endl;
        cout << "SOURCE : " << source << endl;
        cout << "DESTINATION : " << destination << endl;
        cout << "TRAIN TIME : " << train_time << endl;
    }

    void SearchTrain()
    {
        int SearchNo;
        cout << "Enter Train Number to search: ";
        cin >> SearchNo;
        if (SearchNo == train_no)
        {
            printTrainDtails();
        }
        else
        {
            cout << "Train number is not valid...";
        }
    }
};
