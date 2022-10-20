  #include <iostream>
  using namespace std;

    int c = 50;

  int main(){
      
     ***************BUILD IN DATA TYPES***************
    int a, b, c;
    cout<<" enter the value of  a:"<<endl;
    cin>>a;
    cout<<" enter the value of b:"<<endl;
    cin>>b;
    c = a+b;
    cout<<" the sum is:"<<c<<endl;  
    cout<<"the global scope is:"<<::c<<endl;
    cout<<endl;
    //scope resolution operator (::). 

    //***************FLOAT,DOUBLES AND LONG DOUBLES LITERALS****************
    float x = 33.3F;
    long double y = 33.3L;  
    cout<<"the value of x is"<<x<<endl;
    cout<<"the value of y is"<<y<<endl;
    cout<<endl;
    cout<<" the size of 33.3 is"<<sizeof(33.3)<<endl; 
    cout<<" the size of 33.3f is"<<sizeof(33.3f)<<endl; 
    cout<<" the size of 33.3F is"<<sizeof(33.3F)<<endl; 
    cout<<" the size of 33.3l is"<<sizeof(33.3l)<<endl; 
    cout<<" the size of 33.3L is"<<sizeof(33.3L)<<endl;  

    //***************REFERENCE VARIABLES***************
    // BHAVYA ----> BHAVLI ----> BHAVI ----> GRATITUDE 

     float B = 333;
     float & S = B;
     cout<<B<<endl;
     cout<<S<<endl;

     //***************typecasting***************
        
        int A = 45;
        float S = 45.33;
        cout<<"the value of A is:"<<(float)A<<endl;
        cout<<"the value of A is:"<<int(A)<<endl; 

        cout<<"the value of S is:"<<int(S)<<endl; 
        cout<<"the value of S is:"<<(int)S<<endl; 

        int c = (int)S;

        cout<<" the sum is:"<<A + S<<endl; 
        cout<<" the sum is:"<<A + int(S)<<endl; 
        cout<<" the sum is:"<<A + (int)S<<endl; 
        



    return 0;
  }
