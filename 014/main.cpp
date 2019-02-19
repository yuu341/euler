#include<iostream>
#include<cmath>
#include<map>
using namespace std;

#define ll long long

map<int,int> cache;

ll calc(ll val)
{
  if(cache[val])
    return cache[val];

  if(val%2==0)
    return 1+calc(val/2);
  else
    return 1+calc(val*3+1);
}
int main()
{
  const ll SIZE=1000000;
  cache[1] = 1;

  int max = 0;
  int result = 0;
  for( int i=2; i<=SIZE ; i++ )
  {
    ll count = calc(i);
    cache[i] = count;

    if(count > max){
      max = count;
      result = i;
    }
  }

  cout << "result:"<< result << " count:" << max << endl;
  return 0;
}


