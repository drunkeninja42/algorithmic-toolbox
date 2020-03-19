#include <iostream>
using namespace std;
long long int sum_of_two_digits(long long int first_digit,long long int second_digit) {
    return (first_digit + second_digit);
}

int main() {
    long long int a = 0;
    long long int b = 0;
    cin >> a;
    cin >> b;
    cout << sum_of_two_digits(a, b);
    return 0;
}
