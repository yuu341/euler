#include<iostream>
#include<cmath>
using namespace std;


int main()
{
  const int max = 1000000;

  int n[max];
  for( int i=2 ; i<max ; i++ )
  {
    n[i] = i;
  }

  for( int i=2 ; i<sqrt(max) ; i++ )
  {
    for( int j=2 ; i*j<max ; j++ ){
      n[i*j] = 0;
    }

  }

  int c=1;
  for( int i=0 ; i<max; i++ )
  {
    if(n[i])
    {
      if(c == 10001)
      {
        cout << n[i] << endl;
        return 0;
      }
      c++;
    }

  }

  return 0;
}


