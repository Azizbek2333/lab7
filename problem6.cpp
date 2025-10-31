#include <iostream>
using namespace std;
int product( int x) {
    if (x==0)
        return 1;
    return (x%10) * product(x/10);


}


int main() {
    int x;
    cout << "enter a number";
    cin >>x;
    cout << product(x) << endl;

    return 0;

}
