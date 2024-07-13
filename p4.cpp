#include <bits/stdc++.h>

using namespace std;

void print(int n)
{
    for (int i = 0; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << i<<" ";
        }
        cout << endl;
    }
}

void print1(int n)
{
     
}

    int main()
{

    // test cases
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        
        print(n);
    }

    return 0;
}