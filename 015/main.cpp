#include<iostream>
#include<cmath>
#include<map>
using namespace std;

#define ll long long


int main()
{
  const int xsize= 20 + 1;
  const int ysize= 20 + 1;

  ll f[ysize][xsize];

  for( int i=0 ; i<xsize ; i++)
  {
    f[0][i] = 1;
    f[i][0] = 1;
  }

  for( int x=1 ; x<xsize ; x++ )
  {
    for( int y=1 ; y<ysize ; y++ ){
      f[y][x] = f[y-1][x] + f[y][x-1];
    }
  }

  cout << f[ysize-1][xsize-1] << endl;
  return 0;

}

