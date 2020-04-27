#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
long long sum(long long n,long long k)
{
	//3(n/3)((n/3)+1)/2
	long long d=n/k;
	long long sum=k*(d*(d+1))/2;
	return sum;
}
long long ans(int a,int b)
{
	int c=(a*b)/__gcd(a,b);
	//cout<<c;
	long long sumup=sum(999,3)+sum(999,5)-sum(999,c);
	return sumup;
}

int main()
{
	int a=3,b=5;
	long long answer=ans(a,b);
	cout<<answer;
	return 0;
}
	
