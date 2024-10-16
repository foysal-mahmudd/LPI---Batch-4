#include <bits/stdc++.h>

using namespace std;

int main()
{

    // how to find or calculate cubic or big root number

    // for qubic root we have a library function

    int a_number;
    cin >> a_number;

    cout << cbrt(a_number);

    // for bigger nm

    double base;
    cin >> base;
    double exponent;
    cin >> exponent;

    double root = 1.0 / exponent;
    double result = pow(base, root);
    cout << result << endl;

    // DIfferent types of operator!
    // operator to check equality
    int a = 3, b = 5;
    int c = a < b;
    cout << c << endl;

    // we can also use bool data type beside integer like
    bool check = a < b;
    cout << check << endl; // it will give the same ans

    cout << (a == b) << endl;
    
     // we can also check with variable direcly in
      // print funtion without using third varible

    // operator check greater or less
    a = 5, b = 10;
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

    // logical operator

    // logical and(&&) operator
    int x = 5, y = 4, z = 10;

    bool check2 = ((x < y) && (y < z));

    // you can also write it like
    check2 = ((x < y) and (y < z));
    cout << check2 << endl;
    // you can write it in direct in print function
    cout << ((x < y) and (y < z)) << endl;

    // logical or(||) operator
    check2 = ((x < y) || (y < z));
    check2 = ((x < y) or (y < z));
    cout << check2 << endl;

    // logical not(!) operator

    check2 = !(x < y); // if our condition will true then not operator
                       // will make it false and if our conditon will
                       // false then not operator will make it true
    cout << check2 << endl;

    int num1, num2;
    num1 = num2 = 10;

    num2 = num2 + (num1); // we know it as arithmaitc operation but we can write it
                          // in more simple form;

    num2 += num1; // add and assign value in num2
    num2 -= num1; // subtract and assign value
    num2 *= num1; // multiply and assign
    num2 /= num1; // divide and assign value
    num2 %= num1; // mod and assign value

    // increment and decrement operator

    int m = 10;
    m++; // it will add one to m and will give ans 11;
    cout << m << endl;

    m = 20;
    m--;               // it will subtact one to m and will give ans 19;
    cout << m << endl; // but this two operators are only applicable
                       // for only one additon and subtraction
                       // like a=a+1 or a=a-1 not for a=a+10 or a=a-10;

    // some practice problem with realtion ,logical opertor

    // problem 1, check a number is even or odd?

    int v;
    cin >> v; // we make user input system

    check = (v % 2 == 0);
    cout << check << endl; // if ans return 1 then even and if 0 then odd

    // problem 2, check a person is adult or not

    int age;
    cin >> age;

    check = (age >= 18);
    cout << check << endl; // if ans 1 then adult and 0 then not adult

    // assignment problem 1

    int road_lenght = 10, road_width = 2;
    int area = (road_lenght * road_width) * 100; // converitng meter into centimeter by multiplying 100

    int bricks_lenght = 8, bricks_width = 4;
    int area2 = (bricks_lenght * bricks_width);

    double bricks_num = (area / area);
    cout << bricks_num * 25 << endl;

    // assignment problem 2

    int ans = pow(2, 20);
    cout << ans << endl;

    // assignment problem 2 of algebric expression to solve quadratic equation

    int a, b, c;
    cin >> a >> b >> c; // we should give b a little bit of big nm then a and c
                        // else it will produce an error!

    ans = -b + sqrt(b * b - 4 * a * c) / 2 * a;
    cout << ans << endl;

    // assignment problem 3 of algebric expression

    int a1, b1, c1;
    cin >> a1 >> b1 >> c1;

    double ans3 = (pow(((a1 + b1) / (b1 - c1)), 2) / (2 * a1 - c1)) * 2 * 2;
    cout << ans3 << endl;

    return 0;
}
