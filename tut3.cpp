#include <iostream>
using namespace std;

int main(){

    int a=6, b=3;

    cout<<"types of operator in c++";

//arithmetic operators in c++: 

    cout<<" the value of a + b is:"<<a+b<<endl;           
    cout<<" the value of a - b is:"<<a-b<<endl;           
    cout<<" the value of a * b is:"<<a*b<<endl;           
    cout<<" the value of a / b is:"<<a/b<<endl;           
    cout<<" the value of a % b is:"<<a%b<<endl;            
    cout<<" the value of a++ is:"<<a++ <<endl;
    cout<<" the value of a-- is:"<<a--<<endl;
    cout<<" the value of  ++a is:"<<++a<<endl;
    cout<<" the value of --a is:"<<--a<<endl;

    cout<< endl;

    //assignment operators: used to assin values in variables:
/* int a = 3, b = 33;
char bhavi = 's';
*/

// comparison operator: this operrator helps in to compared with other operators:

int s = 33, i = 66;

cout<<" the value of s < i "<<(s<i)<<endl;
cout<<" the value of s > i "<<(s>i)<<endl;
cout<<" the value of s <= i "<<(s<=i)<<endl;
cout<<" the value of s >= i "<<(s>=i)<<endl;
cout<<" the value of s != i "<<(s!=i)<<endl;
cout<<" the value of s == i "<<(s==i)<<endl;

cout<<endl;

// logical operators 

cout<<" values "<<((s==i) && (s>i))<<endl;
cout<<" values "<<((s==i) || (s>i))<<endl;
cout<<" values "<<(!(s==i))<<endl;



    return 0;
}
