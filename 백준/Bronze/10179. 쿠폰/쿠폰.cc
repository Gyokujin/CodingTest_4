#include <iostream>
using namespace std;

int main() {
    int n;
    double price;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> price;
        cout << fixed;
        cout.precision(2);
        cout << "$" << price * 0.8 << endl;
    }
    return 0;
}