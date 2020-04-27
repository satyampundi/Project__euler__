#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int gcd(int a, int b) { 
   if (b == 0) 
      return a; 
   return gcd(b, a % b);  
}
int main()
{
	long int ans=1;
	 for (int i = 2; i < 20; i++) 
        ans = (((i * ans)) /(gcd(i, ans)));
        
        
        
        cout<<ans;
	
		
	return 0;
}
	
