#include<iostream>         // this is a header file

using namespace std;       // this line is for using namespace

int main(){                // this is called main function

   // variable and data type

   int a = 5;               // here int is data type and a is variable name and 5 is the 
                            // data which we store in varaible a;

   float b=5.5;             // here float is another data type which 
                            // store floating value or decimal value

   double c= 5.5343243543;  // double is like float which
                            // store longer decimal

   char f='c';              // char data is for storing letter or 
                            // charechter value

   int num1;
   cout<<sizeof(num1);      // here we printed the size of num1
                            // variable by using sizeof() function
                            // you can also check for other data type

   cout<<sizeof(char);      // also we can see our data type size by
                            // direcly                      

   int var1;
   cin>>var1;               // we use cin>> fucntion to take input
                            // from user
   cout<<var1;              // and cout<< for printing or showing output
                            // on screen                                  
    
   cout<<"hello world"<<endl;
   cout<<"I live in bangladesh"<<endl;   // this endl keyword is for going or creat
                                          // next line.
   

    return 0;                // this is return statement for main function
}
