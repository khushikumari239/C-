#include <bits/stdc++.h>
using namespace std;

int main() 
{
int n;

cout<< "enter n";
cin>>n;
cout << "Divisors of " << n << ": ";
for (int i = 1; i <= sqrt (n); i++)
{
    if (n%i==0)
    {
        cout<<i<<" ";

        if ( i!=n/i  )
        {
            cout<<n/i<<" ";
        }
        
    }

}
cout << endl;

    return 0;
}
// g++ .\devisors.cpp