#include<iostream>
#include<cmath>
#include<map>
using namespace std;

#define ll long long

map<int,string> table;

void init()
{
  table[1] = "one";
  table[2] = "two";
  table[3] = "three";
  table[4] = "four";
  table[5] = "five";
  table[6] = "six";
  table[7] = "seven";
  table[8] = "eight";
  table[9] = "nine";
  table[10] = "ten";
  table[11] = "eleven";

  table[12] = "twelve";
  table[13] = "thirteen";
  table[14] = "fourteen";
  table[15] = "fifteen";
  table[16] = "sixteen";
  table[17] = "seventeen";
  table[18] = "eighteen";
  table[19] = "nineteen";
  table[20] = "twenty";
  table[30] = "thirty";
  table[40] = "forty";
  table[50] = "fifty";
  table[60] = "sixty";
  table[70] = "seventy";
  table[80] = "eighty";
  table[90] = "ninety";
  table[100] = "onehandred";
  table[1000] = "onethousand";
}

int main()
{
  init();
  int count = 0;
  for( int i=1 ; i<=1000 ; i++ ){
    //cout << i << ":";

    if(table[i].length()>0)
    {
      count += table[i].length();
      continue;
    }
   
   int right = i%100;
  int left = i/100; 
    if(i>=100){
      
      count += 7;//"handred".length();
      if(i%100!=0){
        count += 3;//"and".length();
      }
      /*
      cout << left << ":" << right << endl;
      cout << table[left].length() << endl;
      cout << right/10 << ":" << right%10 << endl;
      cout << table[right/10] << endl;
      cout << table[right%10] << endl;
      //*/
      count += table[left].length();
      if(table[right].length() > 0 ){
        count += table[right].length();
        continue;
      }

    }
      if(table[(right/10)*10].length() > 0)
      {
        count += table[(right/10)*10].length();
      }
      if(table[right%10].length() > 0){
        count += table[right%10].length();
      }

    


  }

  cout << count << endl;
  return 0;
}
