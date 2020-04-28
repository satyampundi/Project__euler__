#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
bool isPrime(long int n) 
{  
    for (long int i = 3; i < n; i=i+2) 
        if (n % i == 0) 
            return false;
	
  
    return true; 
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<long int> a;
    int temp=10000;
    a.push_back(2);
    for(long int i=3;i<=500000;i=i+2)
    {
		if(temp>0 && isPrime(i)){
		a.push_back(i);
		temp--;
	  }
    }
    for(long int i:a)
    cout<<i<<" ";
    return 0;
}
