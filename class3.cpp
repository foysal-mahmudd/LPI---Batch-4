#include<iostream>
#include<cmath>    // header file for pow(),sqrt() math function

using namespace std;

int main()
{

    // valid type declaration
    int a = 10;
    int b = a;
    int c = a + 1;
    int d = c, e;

    int x, y, z;
    x = y = z = 5;
    /*
     invalid type declaration

                      a=5;
                      int a;
                      int a=b=c=d=5;
     */

    // Arithmaic operator and thier operation with operand
    int m, n;
    // how to take input from user
    cin >> m >> n;

    cout << m + n << endl; // addition
    cout << m - n << endl; // substraction
    cout << m * n << endl; // multiplication
    cout << m / n << endl; // division
    cout << m % n << endl; // modulas

    /* some invalid arithmatic instruction
       m+n=ans
       ans=m^n
       ans=mn
    */

    // if mutliple integer data does operation they will return a integer data.
    // int = int * int; // like this

    int ans = m * n; // int operation with int will give an integar ans

    float number1,number2;
    float ans2 = number1 * number2; // float operation with int will give float value
                        // and float operation with float will give float value

    // power and sqrt function

    int num1, num2;
    cin >> num1, num2;

    int result = pow(num1, num2); // this will return a exponent value of num1^num2
    cout << result << endl;

    double result2 = sqrt(num1); // this is a square root function
    cout<< result2 <<endl;

    // program to calculate qubic root or other root operation
    double result3 = cbrt(num1);  // this function will calculate qubic root 
    cout<< result3 <<endl;

    double result4 = pow(num1, 1.0/num2);  // this will calculate like 7 root 5 type root
    cout<< result4 <<endl;

    
