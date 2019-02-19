#include<iostream>
#include<cmath>
using namespace std;

using ll = long long;

int main()
{
  ll result=0;
  //const int MAX =100;
  const ll MAX = 2000000;
  int p[MAX];
  for( int i=2 ; i< MAX ; i++ )
  {
    p[i] = i;
  }

  for( int i=2 ; i<=sqrt(MAX) ; i++)
  {
    for( int j=2 ; i*j<MAX ; j++){
      p[i*j] = 0;
    }
  }

  for( int i=0 ; i< MAX ; i++){
    //cout << p[i] << endl;
    result += p[i];
  }

  cout << result << endl;
  return 0;
}


