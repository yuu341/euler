#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

#define ll long long

int calc(ll target){
  int result = 1;
  for( int i=2; i<sqrt(target); i++)
  {
    if(target%i==0)
      result++;
  }
  cout << target << ":" << result*2 << endl;
  return result*2;
}

int main()
{
  ll tri=2;
  ll i=1;
  for(i=1 ; calc(i)<500 ;)
  {
    i+=tri;
    tri++;
  }
  cout << i << endl;


  return 0;
}


