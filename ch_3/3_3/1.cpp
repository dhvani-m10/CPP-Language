#include"company.cpp"

int main(){

    int n=numberOfCompany();
    Company c1[n];

     for(int i=0;i<n;i++){
        c1[i].setCompanyDetails();
    }
    
    

    return 0;
}