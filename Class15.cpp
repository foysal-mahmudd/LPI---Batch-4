#include <bits/stdc++.h>
using namespace std;

/* // data_type array_name[row][clm]
int main()
{

   ar[0][0] = 10;
  ar[0][1] = 30;
  ar[0][2] = 20;

  ar[1][0] = 40;
  ar[1][1] = 50;
  ar[1][2] = 60;

  ar[2][0] = 40;
  ar[2][1] = 50;
  ar[2][2] = 60;

  ar[3][0] = 70;
  ar[3][1] = 80;
  ar[3][2] = 90;

  int row, clm;
  cin >> row >> clm;
  int ar[row][clm];

  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j<clm; j++)
    cin >> ar[i][j];
  }

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < clm; j++)
    {
      cout << ar[1][2] << " ";
    }
    cout << endl;
  }

  return 0;
} */

int main()
{
  // input
  int row, clm;
  cin >> row >> clm;
  int diagonal[row][clm];
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < clm; j++)
      cin >> diagonal[i][j];
  }

  bool found = true;
  if (row != clm) // check square
    found = false;
  else // row == clm
  {
    for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < clm; j++)
      {
        if (i == j) //check if diagonal is non zero
        {
          if (diagonal[i][j] == 0)
          {
            found = false;
            break;
          }
        }
        else
        {
          if(diagonal[i][j] != 0) // if all value is zero without diagonal
          {
            found = false;
            break;
          }
        }

      }
    }
  }
  if(found)
  cout << "Diagonal" << endl;
  else
  cout << "Not diagonal" << endl;


  return 0;
}
