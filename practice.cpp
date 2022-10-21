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
