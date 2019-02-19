#include <iostream>
using namespace std;

int main()
{
  int result;

  for( int i=3 ; i<1000; i++ )
  {
    if( i%3 == 0 || i%5 == 0 )
      result += i;
  }
  cout << result << endl;
  return 0;
}
