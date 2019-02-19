#include<iostream>
#include<cmath>
using namespace std;


int main()
{
  const int size=1000;

  for( int a=1 ; a<=size; a++ )
  {
    for( int b=1; b<=size; b++ )
    {
      if(a+b>1000)
        break;

      for( int c=1; c<=size; c++ ){
        if(a+b+c>1000)
          break;

        if(a+b+c==1000 && a*a+b*b==c*c){
          cout << a*b*c << endl;
          return 0;
        }
      }

    }
  }


  return 0;
}


