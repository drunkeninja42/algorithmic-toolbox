#include <iostream>
using namespace std;

long long  gcd_naive(long long a, long long b) {
  long long current_gcd = 1;
  for (long long d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}

long long  euclidgcd(long long a,long long b)
{
  if(b==0)
  {
    return a;
  }
  else
  {
    long long a_prime = a%b;
    return euclidgcd(b,a_prime);
  }
  


}



int main() {
  long long a, b;
  cin >> a >> b;
  cout<<euclidgcd(a,b);
  return 0;
}
