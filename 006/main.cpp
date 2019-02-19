#include<iostream>
#include<cmath>
using namespace std;


int main()
{
  long long sum = 0;
  long long mul = 0;
  for( long long i=1 ; i<=100 ; i++ )
  {
    mul += i*i;
    sum += i;
    cout << "mul:" << mul << " sum:" << sum << endl;
  }
  sum *= sum;

  cout << sum - mul << endl;
  
  return 0;
}


