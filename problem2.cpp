#include <iostream>
using namespace std;

int reverse(int n, int rev = 0) {
    if (n == 0)
        return rev;
    int digit = n % 10;
    return reverse(n / 10, rev * 10 + digit);
}

int main() {
    int a;
    cout<<"Enter number" ;
    cin >> a;
    cout << reverse(a);
    return 0;
}
