#include<iostream>

using namespace std;

int main(){

    // program with conditional statement
    // program to check which value is bigger
    int a1, b1;
    cin >> a1 >> b1;

    if (a1 > b1) // if check the condition true or false
    {                                        
        cout << "a1 is the bigger " << endl; // if condition become true this statement will print
    }
    else
    {
        cout << "b1 is the bigger " << endl; // if condition become false this then this statement will print
    }
  
  // program to check a number is positive or negative
    int x;
    cin >> x;

    if (x >= 0)
    {
        cout << "x is postitive " << endl;
    }
    else
    {
        cout << "x is negative " << endl;
    }

    // program to check a number is even or odd

    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "it is an even number " << endl; // only this statement will print
        // and if condition get false nothing will print
    }
    else
    {
        cout<<"it is an odd number"<<endl;
    }

    

    // program about nested if-else
    // this program will check a number is positive and negative even or odd

    int number;
    cin >> number;

    if (number >= 0){ // at first compiler will check this statement and if become true then
    
        if (number % 2 == 0)
        {   // this if will check by compiler and if it become ture then will exicute by compiler
            cout << "positive even value " << endl;
        }
        else
        {
            cout << "positive odd value " << endl;
        }
    }
    else if(number==0)
    {
        cout<<"you inputed an invalid number"<<endl;
    }
    else
    { // first if become false then this else statement will exicute ;
        if (number % 2 == 0)
        { // then this if will check by compiler if true then it will be exicute
            cout << "negative even value" << endl;
        }
        else
        { // and if become false then this else will become exicute
            cout << "negative odd value " << endl;
        }
    }

    //a program to check a student number
    int num;
    cin>>num;

    if(num<0 or num>100){
    cout<<"you entered an invalid nm "<<endl;

    }else{

    if(num<=100 and num>=80){
      cout<<"you got A+"<<endl;
    }
    else if(num<=79 and num>=70){
      cout<<"you got A"<<endl;
    }
    else if(num<=69 and num>=60){
      cout<<"you got A-"<<endl;
    }
    else if(num<=59 and num>=50){
      cout<<"you got B"<<endl;
    }
    else if(num<=49 and num>=40){
      cout<<"you got C"<<endl;
    }
    else if(num<=39 and num>=33){
      cout<<"you got D"<<endl;
    }
    else{
      cout<<"you have failed!"<<endl;
    }
  }


    // practice problem
    // program to check which number is the biggest number between three number

    int a, b, c;
    cin >> a >> b >> c;

    if (a > b and a > c)
    {
        cout << "a is the biggest number " << endl;
    }
    else if (b > c)
    {
        cout << "b is the biggest number " << endl;
    }
    else
    {
        cout << "c is the biggest number " << endl;
    }

    // ternary operator;
    int num1,num2;
    (num1>num2)?cout<<num1<<" is a bigger"<<endl:cout<<num2<<" is bigger"<<endl;
                                           /* here ? this mark will ask if the condition is
                                              true, if true then it will print the first part
                                              after ? mark 
                                              else it will print the second part after : this mark
                                           */ 
  

    return 0;
}
