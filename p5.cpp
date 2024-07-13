#include <bits/stdc++.h>

using namespace std;

void print(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 0; j < n-i+1; j++)
        {
            cout <<"* ";
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