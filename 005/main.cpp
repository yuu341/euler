#include<iostream>
#include<cmath>
using namespace std;

bool is_palindrome(string str)
{
   for( int i=0 ; i<str.size() ; i++ )
   {
     if(str[i] != str[str.size()-i-1]) return false;
   }
//   cout << "is parindrome[" << str << "]" << endl;
   return true;
}

int main()
{
  long result = 1;
  int start = 100;
  int end = 1000;

  for( int i=start ; i<end ; i++ ){
    for( int j=start ; j<end ; j++ ){
      long long num = i*j;

      string str = to_string(num);
      
      if( is_palindrome(str) && num >= result ){
        result = num;
      }

    }
  }
  cout << result << endl;
  return 0;
}


