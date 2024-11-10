#include<iostream> 
#include<cmath>

using namespace std;


int main(){
   
   int array[3];  // int data type , array is the array's name
                  // and [3] is the size of array
    array[0]=4;   // here we acces the first location or index of
                  // this array and store 4 in this variable or index or location
    array[1]=5;
    array[2]=6;

    cout<<array[0]<<endl;// here we print the 0th index value
    cout<<array[1]<<endl;
    cout<<array[2]<<endl;

    int array2[5];
    cin>>array2[0];  // we can took input value from user and store it
                     // in different position or index like here we store
                     // in 0th position
    cin>>array2[1];
    cin>>array2[2];  // you can see this type of input statement repeat in
                     // this program, so we can use loop to input or print output
                     // of array
    for(int i=0; i<5; i++){
        cin>>array2[i];
    }     

    for(int i=0; i<5; i++){
        cout<<array2[i]<<" ";
    }

    float array3[5];
    char  array3[5];
    bool  array3[5];  // we can use different data type array according 
                      // to our use
   
   
   
   int array3[]={1,2,3,4,5}; // when we assign our array's value direcly 
                             // we don't need to say the size of array
                             // compiler will automatic detect the size of array
                             // but most of the case we will not know what kind
                             // of data will use in our array so we must say the
                             // size of array
    int n;
    cin>>n;
    int array4[n];          // we can input the size of array from user and 
                             // create our array according to what user inputed
   
   
   // searching an element in array
   int arr[5];
   int num;
   cin>>num;         // this program will check does num value exist in this array
   
   bool check=false;      

   for(int i=0; i<5; i++){
        cin>>arr[i];       // 5,3,6,8,7 
   }

   for(int i=0; i<5; i++){
    if(arr[i]==num){
        check=true;
        break;   
    }
   }

   if(check==true){
    cout<<"yes it exist"<<endl;
   }
   else{
    cout<<"no, we didn't found this data"<<endl;
   }
   

   // sum of arrays value what user inputed
   int size;
   cin>>size;
   int arr2[size];

   for(int i=0; i<size; i++){
    cin>>arr2[i];
   }

   int sum=0;
   for(int i=0; i<size; i++){
    sum=sum+arr2[i];
   }

   cout<<sum<<endl;


   // assignement 

// #include <iostream>
// #include <cmath>

// using namespace std;

// // fibonacci function
// void fibonacci (int n){
//   int a = 0, b = 1;
//   cout<<a<<" "<<b<<" ";
//   for (int i = 3; i <= n; i++){
//     int c = a + b;
//     cout<<c<<" ";
//     a = b, b = c;
//   }
// }

// // multiplication function
// void multiplication (int n){
//   for (int i = 1; i <= 10; i++){
//     int multiply = n * i;
//     cout<<n<<" x "<<i<<" = "<<multiply<<endl;
//   }
// }

// // Area of triangle
// float area_triangle (int a, int b, int c){
//   float s = (a + b + c) / 2.0;
//   cout<<"Semiperimeter is: "<<s<<endl;
//   float area = sqrt (s*(s-a)*(s-b)*(s-c));
//   return area;
// }

// int main() 
// {
//     //-----------Program--1-----------
   
//     // ফাংশন ব্যবহার করে nতম সংখ্যা পর্যন্ত ফিবোনাচ্চি সিকুয়েন্স প্রিন্ট করার প্রোগ্রাম লিখেন
//     // যেখানে n হচ্ছে ইনপুট সংখ্যা।
    
//     //-----------Solution--1----------
    
//     int n;
//     cin>>n;
    
//     fibonacci(n);
    
//     //-----------Program--2-----------
   
//     // ফাংশন ব্যবহার করে কোনো একটি ত্রিভুজের ক্ষেত্রফল বের করার প্রোগ্রাম লিখেন।
//     // ত্রিভুজের বাহুগুলো ইউজার থেকে ইনপুট নিতে হবে।
    
//     //-----------Solution--2----------
    
//     int a, b, c;
//     cout<<"Enter Your Numbers: "<<endl;
//     cin>>a>>b>>c;
    
//     float area = area_triangle(a, b, c);
    
//     cout<<"Area of triangle is: "<<area<<endl;
    
//     //-----------Program--3-----------
   
//     // একটি ফাংশন লিখেন যা কোনো একটি সংখ্যার নামতা প্রিন্ট করবে। যেমন যদি ইউজার
//     // ইনপুট দেয় ২ তাহলে ২ এর নামতা হলো
//     // ২*১=২
//     // ২*২=৪
//     // ২*৩=৬
//     // ..........
//     // ..........
//     // ২*১০=২০
    
//     //-----------Solution--3----------
    
//     int n;
//     cin>>n;
    
//     multiplication(n);
    
//     return 0;
// }
   
    return 0;
}
