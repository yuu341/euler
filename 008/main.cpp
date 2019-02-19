#include<iostream>
#include<cmath>
using namespace std;


int main()
{

  string s;
  string test;
  for( int i=0 ; i<20 ; i++){
    cin >> s;
    test += s;
  }

  int SIZE = 13;
  long long max = 1;
  for(int sq=0 ; sq+SIZE < test.size() ; sq++){
    long long pro = 1;

    for(int i=0 ; i<SIZE ; i++){
      int d = test[sq+i] - 48;
      if(d == 0)
      {
        pro = 1;
        continue;
      }

      pro *= d;


    }
    if(pro > max)
      max = pro;

  }

  cout << max << endl;

  return 0;
}


