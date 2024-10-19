#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    // Assignment Problems
    //this program is for calculating total bricks price

    int road_length =10;
    int road_side = 2;
    int road_area = ((road_length*100)*(road_side*100));

    int brick_length=8;
    int brick_side=4;
    int brick_area = brick_length*brick_side;

    float bricks_num= road_area/brick_area;
    int result=bricks_num*25;

    cout<<result<<endl;

     //program to calculate power
      cout<<pow(2,20)<<endl;

    // program to simply algebric expression

   // first expression
    int a,b;
    cout<<"enter your numbers ";
    cin>>a>>b;
    float ans= ((a+b)-(a-b))/2; 
    cout<<"your ans is "<<ans<<endl;        

    // second expression
    int a1,b1,c1;
    cout<<"enter your three numbers ";
    cin>>a1>>b1>>c1;

    double ans1=(-b1+sqrt((b1*b1)-4*a1*c1))/(2*a1); 
    cout<<"your ans is "<<ans<<endl;             
                                
    
    // third expression
    int a2,b2,c2;
    cout<<"enter your three number ";
    cin>>a2>>b2>>c2;

    int res= pow(2,2); //2^2
    float ans2= (pow(((a2+b2)/(b2-c2)),2)/(2*a2-c2))*2*2;
    cout<<"the ans is "<<ans<<endl;

    // Realation Operator

    // DIfferent types of operator!
    // operator to check equality
    int a = 3, b = 5;
    int c = a < b;
    cout << c << endl;

    cout << (a == b) << endl;   // print funtion without using third varible

    // operator check greater or less
    
    check = (a < b);
    cout << check << endl;
    cout << (a < b) << endl;

    check = (a > b);
    cout << check << endl;

    // operator to check greater and equality in same time

    check = (a <= b);
    check = (a >= b);
    cout << check << endl;
    cout << (a <= b) << endl;

    // not operator
    check = (a != b);
    cout << check << endl;


    // some invalid operator declaration
    /*  a< = b
        a<b<c // it will not give error but the ans will be wrong
    */

    
    // some practice problem with realtion operator

    // problem 1, check a number is even or odd?

    int num;
    cout<<"enter your number ";
    cin >> num; // we make user input system

    check = (num % 2 == 0);
    cout << check << endl; // if ans return 1 then even and if 0 then odd

    // problem 2, check a person is adult or not

    int age;
    cin >> age;

    check = (age >= 18);
    cout << check << endl; // if ans 1 then adult and 0 then not adult

  

    return 0;
}
