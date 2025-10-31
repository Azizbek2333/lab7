#include <iostream>
using namespace std;
int Pal(int n, int d) {

    if (n == 0)
        return 1;
    int a = n / d;
    int b = n % 10;
    if (a != b)
        return 0;
    n = (n % d) / 10;
    d = d / 100;
    return Pal(n, d);
}
int Pal(int n) {
    if (n < 0)
        return false;

    int d = 1;
    while (n / d >= 10)
        d *= 10;
    return Pal(n, d);
}
int main() {
    int a;
    cout <<"Enter a number: ";
    cin >> a;
    cout << Pal(a);


    return 0;
}
