#include"train.cpp"


int main(){
    int n=numberOfTrain();

    Train t1[n];

    int ch;

     do
    {
        cout << "1. Train Record"<<endl;
        cout << "2. Display  Records"<<endl;
        cout << "3. By searching Train Number"<<endl;
        cout << "0. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1 :

            for(int i=0;i<n;i++){
                t1[i].setTrainDetails();
            }
            break;

        case 2 :

            for(int i=0;i<n;i++){
                t1[i].printTrainDtails();
            } 
        
        case 3 : 
             for(int i=0;i<n;i++){
                t1[i].SearchTrain();
            } 

        case 0: 
            cout<<"EXITING..."<<endl;
            break;
        
        default:
            cout<<"Invalid Choice!!";
            break;
        }
    } while (ch != 0);
    
    return 0;
}
