#include<iostream>
#include<cmath>
using namespace std;


int main()
{
  int result = 1;
  const long long target = 600851475143;
  //const int target = 13195;
  long long dest = target;

  for( int i=2 ; i<=sqrt(target) ; i++)
  {
    while(dest%i==0)
    {
      cout <<"i =" << i << endl;
      dest /=i;
      result = i;
    }
  }
  cout << result << endl;
  return 0;
}


