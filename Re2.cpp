#include <iostream>
using namespace std;

void f(int i, int n) {
    if (i > n) // Base case
        return;
    f(i + 1, n); // Recursive call
    cout << i << " "; // Print during backtracking
}

int main() {
    int n;
    cin >> n;
    f(1, n);
    return 0;
}