#include<bits/stdc++.h>

using namespace std;

int main(){
   
   // syntax of nested for loop
      for(int i=1; i<=3; i++){       // first loop is called outer loop
         cout<<"i is now = "<<i<<endl<<endl;
        for(int j=1; j<=5; j++){      // this loop is called inner loop
            cout<<"j is = "<<j; // if we run nested loop in a program our outer loop will 
                                // not run until our inner loop condition become false
         }
       cout<<endl;
      }

      // syntax of while loop

      int i=1;     // initialisation
      while(i<=3){  // our first or outer while loop
        cout<<"i is now = "<<i<<endl<<endl;
        int j=1;    
        while(j<=5){ // second or inner loop
            cout<<"j is = "<<i;
            j++; // j shold be increment in second or inner loop
        }
        cout<<endl;
        i++;  // i will be increment after second or inner loop conditon will false
      }

      int a=1;
      do{       // our first or outer loop
        cout<<"a is now = "<<a<<endl; // here our statment will fist exicute
        int b=1;
        do{     // our second or inner loop
            cout<<"b is = "<<b<<endl; 
            b++;
        }while(b<=5); // inner loop condition will check here 
        a++;
      }while(a<=3);  // and outer loop conditon will check after our inner loop condition


      // also its notable that our nested for,while and do-while loop will also be applicalbe 
      // for float and charecter value

// program to find out prime number

int n;
cin>>n;
bool check=false;

for(int i=2; i<n; i++){
   if(n%i==0){
    check=true;
    break;
  }
} 

if(check=false){
cout<<n<<" is a prime"<<endl;
}
else{
cout<<n<<" is not a prime"<<endl;
}

// print the sequence of 1+1/2+1/4+1/8+.....+1/2^m;

int m;
cin>>m;
float res;

for(int i=0; i<=m; i++){
if(i==0){
 cout<<"1+;
}
 res=pow(2,i);
if(i==m){
cout<<"1/"<<res<<endl;
return 0;
}
 cout<<"1/"<<res<<+;
}

    return 0;
}
