#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter n: "; 
    cin >> n;

    if (n == 1 || n == 2) {
        cout << 1 << endl;
        return 0;
    }

    int a = 1, b = 1, c;
    for (int i = 3; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << c << endl;

    return 0;
}
