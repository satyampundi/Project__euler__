#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143

longest prime problem

*/

int main()
{
	long long int x=600851475143;
	while(x!=0)
	{
		while(x%2==0)
		{
			cout<<2<<",";
			x/=2;
		}
		for(long int i=3;i<sqrt(x);i=i+2)
		{
			while(x%i==0)
			{
				cout<<i<<",";
				x/=i;
			}
		}
		if(x>2)
		{
			cout<<x;
			break;
		}
	}
	
	 
	return 0;
}
	
