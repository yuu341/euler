#include <iostream>
int main(){int a,b,c,r;for(a=b=1,c=r=2; c<4000000;a=b,b=c,c=a+b,r+=c%2==0?c:0);std::cout<<r;}
