#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;


int main()
{
	long int a=1,b=1,c;
	long int x=0,l=4000000;
	while(b<=l)
	{
		if(b%2==0)
		{
			x+=b;
		}
		c=a+b;
		a=b;
		b=c;
	}
	cout<<x;
	
	return 0;
}
	
