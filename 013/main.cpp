#include<iostream>
#include<sstream>
#include<cmath>
using namespace std;

#define ll long long


int main()
{
  string in[100];

  ll sum1=0;
  ll sum2=0;
  ll sum3=0;

  for( int i=0 ; i<100 ; i++ )
  {
    cin >> in[i];

   sum1 += stol(in[i].substr(0,10));
   sum2 += stol(in[i].substr(10,10));
   sum3 += stol(in[i].substr(20,10));

  }

  sum3 %= 10000000000L;
  sum2 += sum3;

  sum2 %= 10000000000L;

  stringstream ss;
  ss << sum1+sum2;

  string result;
  ss >> result;

  cout << result.substr(0,10) << endl;


  return 0;
}


