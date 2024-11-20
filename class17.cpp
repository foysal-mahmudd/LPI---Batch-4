#include<bits/stdc++.h>

using namespace std; 

int len(string str){
  int count=0;
  for(int i=0; str[i]!='\0'; i++){
    count++;
  }

  return count;
}

bool checker(string str1, string str2){
    bool check2=true;
    if(str1.size()!=str2.size()){
        return 0;
    }
    else{
        for(int i=0; i<str1.size(); i++){
            if(str1[i]!=str2[i]){
                  check2=false;
                  break;
            }
        }
    }
    return check2;
}


int main(){

  string str="hello ";
  
  cout<<str.size()<<endl;
  cout<<str.empty()<<endl;
  str.insert(6,"world");
  cout<<str<<endl;
  str.erase(0,6);
  cout<<str<<endl;
  str.replace(6,7,"Amazing");
  cout<<str<<endl;
  
  string str2="hello";
  bool check=str.compare(str2);
  cout<<check<<endl;
  str.clear();
  cout<<str<<endl;
  cout<<str.size()<<endl;
 

  string str1="hello";
  string str3=" world";

  string chararray=str+str2;
  cout<<chararray<<endl;

  
    cout<<len(str)<<endl;
    cout<<checker(str1,str3);
    

  return 0;
}
