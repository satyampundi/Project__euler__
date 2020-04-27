//906609
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

bool ispal(long int ans)
{
	long int rev,temp=ans;
	rev=temp%10;
	temp/=10;
	while(temp!=0)
	{
		rev=(temp%10)+(rev*10);
		temp/=10;
	}
	
	if(rev==ans)
	{
		return true;
	}
	else{
		return false;
		}
}
int main()
{
	int l=100,r=999;
	long int ans=1;
	
	for(int i=l;i<=r;i++)
	{
		for(int j=i;j<=r;j++)
		{
		  ans=i*j;
		  if(ispal(ans))
		  {
			cout<<ans<<" ";
		  }
	    }
	}
		
	return 0;
}
	
