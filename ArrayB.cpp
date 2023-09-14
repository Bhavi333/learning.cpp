#include<iostream>
using namespace std;
int main()
{

int a[5],i=0;

while(i<5){
    cout<<"Array:";
    cin>>a[i];
    i++;
}
cout<<"Array sum:";
int b=0,c=0;
while (b<5)
{
    c = a[b]+c;

    b++;

}
cout<<c;

    return 0;
}