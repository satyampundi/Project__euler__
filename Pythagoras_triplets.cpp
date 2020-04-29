#include <iostream>

using namespace std;
int funt(int x,int y){
	int a=x*x-y*y;
	int b=2*x*y;
	int c=x*x+y*y;
	return (a*b*c);}
int fun(int x,int y)
{
	int a=x*x-y*y;
	int b=2*x*y;
	int c=x*x+y*y;
	return (a+b+c);
}	
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     int n=500;
     //int count=1;
     for(int i=2;i<n;i++){
		for(int j=3;j<n;j++)
		{
			
		    if( j>i && fun(j,i)==1000)
		    {
				cout<<funt(j,i);
				break;
				
			}
		    
		}
	}
    return 0;
}
