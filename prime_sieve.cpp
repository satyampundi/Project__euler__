#include <iostream>
//solution of prime by sieve of Eratosthenes O(n log log n)
//the idea of prime sieve is to store a boolean at index so it is pre computation 
//I used bool array but in some cases int or long long is good if there are sone conditions etc.....
using namespace std;
typedef long long ll;
int n;
void prime_sieve(bool *arr)
{
	//allodd to 1
	for(int i=3;i<=n;i+=2)
	{
		arr[i]=1;
	}
	//now check and mark 
	for(ll i=3;i<=n;i+=2)
	{
		if(arr[i]==1)
		{
			//mark multiples of the noumber as not prime
			for(ll j=i*i;j<=n;j+=i)
			{
				arr[j]=0;
			}
		}
	}
	//corner cases
	arr[2]=1;
	arr[0]=arr[1]=0;	
}
int main()
{
	cin>>n;
	bool arr[n+1]={0};
	prime_sieve(arr);
	cout<<"prime:::::\n";
	//for(int i=n;i>=0;i--) for reverse order
	for(int i=0;i<=n;i++) // for forward order
	{
		if(arr[i]==1)
		{
			cout<<i<<"\n";
		}
	}
	return 0;
	
}
