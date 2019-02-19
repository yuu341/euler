#include<iostream>
#include<cmath>
#include<vector>
using namespace std;


int main()
{

  int n[28][28];
  for( int i=0; i<28 ; i++ )
  {
    for( int j=0 ; j<28 ; j++ )
      n[i][j] = 1;
  }

  for( int i=4 ; i<24 ; i++ )
  {
    for( int j=4 ; j<24 ; j++ )
    {
      cin >> n[i][j];
    }
  }

  
  /*for( int i=0 ; i<28 ; i++){
    for( int j=0; j<28 ; j++ )
    {
      cout << n[i][j] << " ";
    }
  cout << endl;  
  }
  //*/

  int directs[8][2] = {
    {0,1},
    {1,1},
    {1,0},
    {1,-1},
    {0,-1},
    {-1,-1},
    {0,-1},
    {-1,1},
  };
  int max=0;
  for( int i=4 ; i<24 ; i++ )
  {
    for( int j=4 ; j<24 ; j++ )
    {
      for( int d=0 ; d<8 ; d++){
        int vx = directs[d][0];
        int vy = directs[d][1];

        int pro=1;
        for( int k=0 ; k<4 ; k++ )
        {
          pro *= n[i+vy*k][j+vx*k];
        }
        //cout << pro << endl;
        if(pro > max)
          max = pro;
      }
      
    }
  }

  cout << max << endl;

  return 0;
}


