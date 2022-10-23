#include <iostream>

using namespace std;

// if, else if, else:

int main(){
   int age;
    cout<<"Enter the age" <<endl;
    cin>>age;
    if (age<18)
    {
        cout<<" you cannot come in my house: "<<endl;
    }

    else if (age==18)
    {
        cout<<"Eligible in my house: "<<endl;
    }
    else{
        cout<<"get lost: "<<endl;
    } 

    //Switch case statement:
   
    switch (age)
    {
    case 18:
    cout<<"you are in adult category"<<endl;
        break;
    case 90:
    cout<<"old "<<endl;
        break;
    case 2:
    cout<<"not adult "<<endl;
        break;

    default:
    cout<<"nothing special "<<endl;
        break;
    }
    
    cout<<"Done with switch case :"<<endl;
    return 0;
}
