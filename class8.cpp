#include<iostream>

using namespace std;

int main(){
       
       // syntax of for loop
       for( int i=1; i<=5; i++){
        cout<<"hello world"<<endl;
       }

       // we can also use variable in for loop instead of i=1, i<=5;
       int n=1, m=5;
       for(int i=n; i<=m; i++){
        cout<<i<<endl;
       }

     // we can also use float and charecter in for loop

     // float value in for loop
      for(float i=1.5; i<=5.8; i++){
        cout<<i<<endl;
      }

      // charecter value in for loop
      for(char ch='a'; ch<='z'; ch++){
        cout<<ch<<endl;
      } 

      // we can use for loop for also decrement beside increment
      for(int i=10; i>=1; i--){
        cout<<i<<endl;            // this can also applicable for flaot and charecter
      }

      // we can ignore our some of variable in for loop
      int i=1;
      for(; i<=10; i++){  // here semiclon should be given else our program will get an error
        cout<<i<<endl;
      }

      int i=1;
      for(; i<=10;){
        cout<<i<<endl;
        i++;    // here our increment or decrement will happened here 
      }

      // use of break key word in for loop
       for(int i=1; i<=100; i++){
        if(i==50){
          cout<<i<<endl;
          break;         // this statement will break our for loop in number 50;
        }
        cout<<i<<endl;
       }
       
       // use of continue key word in for loop
        for(int i=1; i<=10; i++){
            if(i==7 or i==9){  // for this statement our program will ignore 7 and 9;
             continue;
            }
            cout<<i<<endl;
       }
      
      // this program is for calculate summetion of this series
      // 1+2+3+4+5+.......+n;

      int n;
      cin>>n;
      int sum=0;
      for(int i=1; i<=n; i++){
           sum=sum+i;    // in this sum variable our 1+2+3+4+5+...+n will calculate
      }

      cout<<sum<<endl;

     // this program is for checking a number is prime or not
      int n;
      cin>>n;
      bool check=true;

      for(int i=2; i<n; i++){  // this loop will continue from 2 to n-1;
        if(n%i==0){           // this if will check our n is divible by i or not
          check=false;        // if it can divisible by i then our check will store false value;
          break;             // and our break will break the loop
        }
      }

      if(check==true){       // this if will check our check is still storing treu? 
                             // if true then print this is prime else not prime
        cout<<"prime"<<endl;
      }
      else{
        cout<<"not prime"<<endl;
      }

    return 0;
}
