#include<iostream>

using namespace std;

int main(){

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

    num2 = num2 + num1; // we know it as arithmaitc operation but we can write it
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

return 0;
}
