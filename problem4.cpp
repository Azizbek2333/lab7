#include <iostream>
using namespace std;

bool check(int n, int d) {
    if (d * d > n)
        return 1;
    if (n % d == 0)
        return 0;
    return check(n, d + 1);
}
bool prime(int n) {
    if (n <= 1) return false;
    return check(n, 2);
}
int main() {
    int n;
    cout<<"enter num";
    cin >> n;
    if (prime(n)) cout << "True";
    else cout << "False";
    return 0;
}
