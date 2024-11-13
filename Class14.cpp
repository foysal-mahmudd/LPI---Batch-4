#include <bits/stdc++.h>
using namespace std;

// find Maximum value in the array
 int main()
{
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i<n; i++)
    cin >> arr[i];
  
  int mx = arr[0];
  for(int i = 1; i<n; i++)
  {
    if(arr[i] > mx) // max = 10,(25 > 10)
    mx = arr[i];    // mx = 25
  }
  cout << mx << endl;

  return 0;
}


//Count vowel and consonant
 int main()
{
  int n;
  cin >> n;
  char ar[n];
  for(int i = 0; i < n; i++)
  {
    cin >> ar[i];
  }
  int vowel = 0, consonant = 0;
  for(int i = 0; i < n; i++)
  {
    if(ar[i] == 'a' || ar[i] == 'e' || ar[i] == 'i' || ar[i] == 'o' || ar[i] == 'u')
    vowel++;
    else
    consonant++;
  }
  cout << "Vowel = " << vowel  << " --> Consonant = " << consonant;
  
  return 0;
} 


#include <bits/stdc++.h>
using namespace std;

// Question 5
/* 
input
5
1 2 3 4 5
3
0 10
2 5
4 5 
*/
void vai_amr_output_dekha(int ar[], int size)
{
  for(int i = 0; i<size; i++)
  cout<< ar[i] << " ";
  cout<< "\n";
}

int main()
{
  int n;
  cin >> n;
  int ar[n];
  for(int i= 0; i<n; i++)
  cin >> ar[i];

  int q; // input queries
  cin >> q;
  for(int i = 0; i<q; i++)
  {
    int index, value;
    cin >> index >> value;
    ar[index] = ar[index] + value; // ar[3] = ar[3] + 5
  }
  vai_amr_output_dekha(ar, n); // function call()

  return 0;
}
