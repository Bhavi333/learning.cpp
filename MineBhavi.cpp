#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    cout<<"Hey bhavi i love you "<<endl;
    int age;
      cout<<"Please enter your age "<<endl;
    cin>>age;

    if(age<18)
    {
        cout<<"we have lot of time for _____ "<<endl;
    }

    else if (age>18 && age<25)
    {
        cout<<"Will you marry me? "<<endl;
    }

    else
    {
        cout<<"I am waiting for you lifetime "<<endl;
    }

    cout<<"BTW love you forever "<<endl; 

    //Switch code use:

    switch (age)
    {
    case 3:
        cout<<"It's my lucky number "<<endl;
        break;
    
    case 5:
        cout<<"Is it yours? "<<endl;
        break;
    
    case 10:
        cout<<"Same characters of nickname "<<endl;
        break;
    

    default:
        cout<<"Your choice is mine choice "<<endl;
        break;
    }

    cout<<"Be always happy "<<endl;

    return 0;
}
