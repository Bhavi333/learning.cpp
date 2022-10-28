#include <iostream>
#include <iomanip>
using namespace std;
int main(){

   cout<<"Hey bhavi i miss you"<<endl;

   //For loop:

   for(int a = 1; a<=50; a++)
   {
    cout<<a<<endl;
   } 
    
    cout<<endl;

   //While loop:
    int b = 1;
   while(b<=50)
   {
    cout<<b<<endl;
    b++;
   } 

    cout<<endl;

   // Do while loop:
    int c = 3;
   do
   {
    cout<<c<<endl;
    c++;
   }
   while(c<=500);

    cout<<endl;

   //Table of 3:
    int s = 3;
   do
   {
    cout<<"TABLE OF 6:"<<endl;
    cout<<s*1<<endl;
    cout<<s*2<<endl;
    cout<<s*3<<endl;
    cout<<s*4<<endl;
    cout<<s*5<<endl;
    cout<<s*6<<endl;
    cout<<s*7<<endl;
    cout<<s*8<<endl;
    cout<<s*9<<endl;
    cout<<s*10<<endl;
    break;
   }
   while(s<=10);
    return 0;
}
