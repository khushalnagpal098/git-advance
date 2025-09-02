#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"0. Exit"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"Enter Your Choice : "<<endl;
    cin>>choice;
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
           { int num1;
            int num2;
            cout<<"Enter Num1 : "<<endl;
            cin>>num1;
            cout<<"Enter Num2 : "<<endl;
            cin>>num2;
            cout<<num1 + num2<<endl;
            break;}
        
           
        case 3:
           { int num1;
            int num2;
            cout<<"Enter Num1 : "<<endl;
            cin>>num1;
            cout<<"Enter Num2 : "<<endl;
            cin>>num2;
            cout<<num1 + num2<<endl;
            break;}
        
        default:
            break;
        }
    }
    
    
    return 0;
}