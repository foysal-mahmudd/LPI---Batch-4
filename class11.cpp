#include <iostream>
using namespace std;

// return_type function_name(parameter)
// {
// function body
// }

// 1st function
int summ(int first_num, int second_num)
{
  int ans = first_num + second_num;
  return ans; // return value to main function
}

// 2nd function
void Is_even(int result)
{
  if (result % 2 == 0)
    cout << result << " is Even" << endl;
  else
    cout << result << " is Odd" << endl;
}

int main()
{
  int result = summ(30, 16); // function call
  Is_even(result); // function call

  int result_one = summ(20, 15);
  Is_even(result_one);

  int result_two = summ(100, 200);
  Is_even(result_two);

  Is_even(3);


  return 0;
}
