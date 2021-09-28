#include <iostream>
using namespace std;

int main(){
    int year;
    cout<<"Welcome to Leap Year Checker App"<<endl;
    cout<<"You can enter any year to check is it leap year? or not?"<<endl;
    cout<<"Enter the year:"<<endl;
    cin>>year;

    if(year%4==0){

            if(year%400==0)
            {
                cout<<year<<" is a Leap year!";
            }
            else
            {
                cout<<year<<" is not a Leap year!";    
            }
    }
    else
    {
        cout<<year<<" is not a leap year!";
    }

    return 0;
}
