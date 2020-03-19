#include <iostream>
#include <cassert>
#include<vector>
using namespace std;
//_____________________________________________
//This is not a naive implementation, it involves DP.


long long  fibonacci_fast(long long n) {
        vector<long long> fib(n+1,0);
        fib[0] = 0;
        fib[1] = 1;
        for(int i=2;i<=n;i++)
        {
            fib[i] = fib[i-1] + fib[i-2];
        }

    return fib[n];
}

int main() {
    long long n;
    cin >> n;
    cout<<fibonacci_fast(n) << '\n';
    return 0;
}
