#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int countDivisors(int n) {
    int result = 1; // Initialize result to 1
    int sqrtN = sqrt(n);

    for (int i = 2; i <= sqrtN; ++i) {
        int count = 0;

        while (n % i == 0) {
            n /= i;
            count++;
        }

        result *= (count + 1);
    }

    if (n > 1) {
        result *= 2; // If n is a prime number, multiply result by 2
    }

    return result;
}

int main() {
    unsigned int x = 0;
    for(unsigned int i=1;i<INT_MAX;i++)
    {
        x = (i*(i+1))/2;
        if(countDivisors(x)>500)
        {
            cout<<x; return 0;
        }
    }
    return 0;
}
