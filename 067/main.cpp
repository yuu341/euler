#include<iostream>
#include<cmath>
#include<map>
using namespace std;

#define ll long long
#define size 100

int t[size+1][size+1];

int main()
{
  for( int i=1 ; i<=size ; i++ )
  {
    for( int j=1 ; j<=i ; j++ )
    {
      cin >> t[i][j];

    }
  }

  for( int i=0 ; i<size ; i++ )
  {
    for( int j=0 ; j<size ; j++)
    {
      cout << t[i][j] << "\t";
    }
    cout << endl;
  }

  cout << "------" << endl;

  int result = 0;
  for( int i=1 ; i<=size ; i++ )
  {
    for( int j=1 ; j<=i ; j++ )
    {
      int l = t[i-1][j-1];
      int r = t[i-1][j];
      int tmp = t[i][j];
      t[i][j] += max(l,r);
      result = max(result,t[i][j]);
      cout << t[i][j] <<"[" << tmp << "]\t";
    }
    cout << endl;
  }
  cout << result << endl;

  return 0;
}
