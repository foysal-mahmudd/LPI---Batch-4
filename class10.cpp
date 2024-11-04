#include<iostream>

using namespace std;

int main(){

// this program is for reversing a number like if user input 4325 then it will 
 // reverse into 5234;

    int num;
    cin>>num;
    int rnum=0;
    int rem;

    while(num>0){
        rem=num%10;   
        rnum=rnum*10+rem;
        num=num/10;
    }

    cout<<rnum<<endl;


// this program is for finding prime number between 1 to n;
// like if user input 10 then our program will print 1,2,3,5,7

    int n;
    cin>>n;

    for(int i=2; i<=n; i++){
        bool check=false;
        for(int j=2; j<i; j++){
            if(i%j==0){
               check=true;
            }
        }

        if(check==false){
            cout<<i<<" ";
        }
    }

// this program are for printing pattern

 // this program will print a pattern like this where row and col can be change  
         /* 
           ****
           ****
           ****
         */

    int row,col;
    cin>>row;
    
    for(int i=1; i<=row; i++){
        for(int j=1; j<=row; j++){
            cout<<"*";
        }cout<<endl;
    }

 // this program is for printing this pattern 
      /*
          *
          **
          ***
          ****
          *****
      */

    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }cout<<endl;
    }
/* 
  1
  1 2
  1 2 3
  1 2 3 4
  1 2 3 4 5
*/

for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }cout<<endl;
    }

// this program is for printing this pattern 
         /*
           *****
           ****
           ***
           **
           *
         */

    for(int i=row; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }cout<<endl;
    }

    return 0;
}
