#include<bits/stdc++.h>

using namespace std; 

int main(){

  char arr[5];

  arr[0]='a';
  arr[1]='b';
  arr[2]='c';
  arr[3]='d';
  arr[4]='e';

  cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4];

  for(int i=0; i<5; i++){
    cin>>arr[i];
  }

  for(int i=0; i<5; i++){
    cout<<arr[i];
  }
  
  int n;
  cin>>n;      //n=5
  char arr2[n+1];// arr2[5];
  
  for(int i=0; i<n; i++){  
    cin>>arr2[i];          
  }

  arr2[n]='\0';

  for(int i=0; arr2[i]!='\0'; i++){ 
    cout<<arr2[i];
  }

  string str;
  cin>>str;
  
  int count=0;
  for(int i=0; str[i]!='\0'; i++){
         count++;
  }

  cout<<count<<endl;

 cout<<str.size()<<endl;

 string str2;
 cin>>str2;
  
  int size=str2.size();  //abcba
  bool check=true;

  for(int i=0, j=size-1; i<j; i++, j--){  // i=2,j=2;
     if(str2[i]!=str2[j]){
       check=false;
       break;
   }
 }

 if(check){
  cout<<"palindrome"<<endl;
 }else{
  cout<<"Not palindrome"<<endl;
 }

  return 0;
}
