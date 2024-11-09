// Different types of Function 

#include <bits/stdc++.h>
using namespace std;
// function Type
// 1st function
//return + parameter
char func1(int n)
{
  if(n % 2 == 0)
  return 'E';
  else
  return 'O';
}

// 2nd function
// return + No parameter
float PI()
{
  return 3.1416;
}

// 3rd function
// No return + parameter
void Ki_khobor(int n)
{
  if( n == 1)
  cout << "Valo aci" << endl;
  else
  cout << "Valo nai" << endl;
}
// 4th function
// No return + no parameter
void Print()
{
  cout << "Ai neo tmr print" << endl;
}

int main()
{
 char ans = func1(3); // function one call
 cout << ans << endl; 
 float ans1 = PI(); // Function two call
 cout << ans1 << endl;

 Ki_khobor(0); // function three call
 Print(); // function four call

  return 0;
}




// Local Variable, Global variable,Area Of 
//circle, Permutation 

#include <bits/stdc++.h>
using namespace std;
// 
// Global and Local Variable
int global = 1512; // Global Variable
void scope()
{
  int b = 25; // Local variable
  cout << "Sub Local " <<  b << endl;
  cout << "Sub global " << global << endl; // Access global
}

void func()
{
  cout << "Func global" << global << endl; // Access global
}

int main()
{
  scope();
  func();
  int a = 10; // Local variable
  cout << "Main Local " << a << endl;
  cout << "Main global " << global << endl; // Access global

  return 0;
}


// Problem 01
// Area of circle 
float PI()
{
  return 3.1416;
}

float doublee(int r)
{
  return PI()*(r*r); // 3.1416 * r^2
}

int main()
{
  int r;
  cin >> r;

  float area = doublee(r);
  cout << area << endl;

  cout << PI() * doublee(3) << endl;
 return 0;
} 

// Problem 02:
// Permutation useing function

long long factorial(int n)
{
  long long ans = 1;
  for(int i =1; i<=n; i++)
    ans *= i;
  
  return ans;
}


int main()
{
  int n,r;
  cin >> n >> r;
  long long ans = factorial(n)/ factorial(n-r); //  p = n!/(n-r)!
  cout << ans << endl;
  return 0;
}




// User difined Power Function and function prototype 

#include <bits/stdc++.h>
using namespace std;

// function prototype
void multiple(int a, int b);
int main()
{
  multiple(30, 5);

  return 0;
}

void multiple(int a, int b) // Prototype
{
  cout << a* b;
}

// Make Power function 
int poww(int n, int p)
{
  int ans = 1;
  for(int i  = 1; i<=p; i++) // Loop runing 1 to p times.
  ans*= n;

  return ans;
}

int main()
{
  int n, p;
  cin >> n >> p;
  cout <<  poww(n, p) << endl; // poww(number, power)
  
  return 0;
}

