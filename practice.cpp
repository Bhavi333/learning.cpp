#include <iostream>
using namespace std;

int b = 2005;

int main(){

int a = 3;
float b = 3.3;
bool babes = true;
char bhavli = 's';
long double c = 33.3;

cout<<" hey bhavi how are you:"<<endl;
cout<<" here is the value of a is:"<<a<<endl;
cout<<" here is the value of b is:"<<b<<endl;
cout<<" here is the value of babes is:"<<babes<<endl;
cout<<" here is the value of bhavli is:"<<bhavli<<endl;
cout<<" here is the value of c is:"<<c<<endl;

cout<<endl;

  //opertaors from start here:

  //Comparison operator:

  int x = 20;
  int y = 21;
  int z = 22;

  cout<<" the value x < y = "<<(x<y)<<endl; 
  cout<<" the value y > y = "<<(x>y)<<endl; 
  cout<<" the value z <= y = "<<(x<=y)<<endl; 
  cout<<" the value y >= z = "<<(x>=y)<<endl; 
  cout<<" the value z != y = "<<(x<y)<<endl; 
  cout<<" the value x == y = "<<(x==y)<<endl;

  cout<<endl;

  //Arithemetic operators:

  int d = 99;
  int e = 77;
  int f = 88;

  cout<<" the value d*e "<<d*e<<endl;
  cout<<" the value d+f "<<d+f<<endl;
  cout<<" the value d-f "<<d-f<<endl;
  cout<<" the value f/e "<<f/e<<endl;
  cout<<" the value ++e "<<++e<<endl;
  cout<<" the value f-- "<<f--<<endl;
  cout<<" the value ++d "<<++d<<endl;
  cout<<" the value e-- "<<e--<<endl;
  cout<<" the value f%e "<<f%e<<endl;

  cout<<endl;

  //Assignment operator: store to values in variables:

   int n = 44;
   char bhavi = 'S';

   cout<<" values "<<n<<endl;
   cout<<" values "<<bhavi<<endl;

   cout<<endl;

   //Logical operator

   int o = 36;
   int p = 63;

   cout<<" the values is: "<<((o==p) && (o<p))<<endl;
   cout<<" the values is: "<<((o==p) || (o>p))<<endl;
   cout<<" the values is: "<<(!(o==p))<<endl;

   cout<<endl;

   cout<<" the value of global digit is: "<<::b<<endl;
   cout<<endl;

   //tut7 all programs:
   
   // Typecasting:

   int h = 1;
   float i = 2.3F;
   long double j = 2.4L;

   cout<<" h is change in flaot "<<(float)h<<endl;
   cout<<" h is change in flaot "<<float(h)<<endl;
   cout<<" i is change in int "<<int(i)<<endl;
   cout<<" i is change in int "<<(int)i<<endl;

    cout<<endl;

   cout<<" the size of h is: "<<sizeof(h)<<endl; 
   cout<<" the size of i is: "<<sizeof(i)<<endl; 
   cout<<" the size of j is: "<<sizeof(j)<<endl; 

   cout<<endl;

   //Reference variable:

   //i have a name in my house is : bhavya ---> out of house : ordinary ---> in school : sharma
   // but i am only one only my name is changed at diferent places:

     int X = 50;
     int Y = X;
       
       cout<<" the value of X is what? "<<X<<endl;
       cout<<" the value of Y is what? "<<Y<<endl;

       cout<<endl;

        



    return 0;
}




/* [Running] cd "c:\Users\bhavy\OneDrive\Desktop\cpp\" && g++ practice.cpp -o practice && "c:\Users\bhavy\OneDrive\Desktop\cpp\"practice
 hey bhavi how are you:
 here is the value of a is:3
 here is the value of b is:3.3
 here is the value of babes is:1
 here is the value of bhavli is:s
 here is the value of c is:33.3

 the value x < y = 1
 the value y > y = 0
 the value z <= y = 1
 the value y >= z = 0
 the value z != y = 1
 the value x == y = 0

 the value d*e 7623
 the value d+f 187
 the value d-f 11
 the value f/e 1
 the value ++e 78
 the value f-- 88
 the value ++d 100
 the value e-- 78
 the value f%e 10

 values 44
 values S

 the values is: 0
 the values is: 0
 the values is: 1

 the value of global digit is: 2005

 h is change in flaot 1
 h is change in flaot 1
 i is change in int 2
 i is change in int 2

 the size of h is: 4
 the size of i is: 4
 the size of j is: 16

 the value of X is what? 50
 the value of Y is what? 50


[Done] exited with code=0 in 0.507 seconds*/


