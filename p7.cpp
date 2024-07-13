#include <bits/stdc++.h>

using namespace std;

void print(int n)

{
    for (int i = 0; i <n; i++)
    {

        for (int j = 0; j <n-i-1; j++)
        {
            cout <<" " ;
        }
            for (int k = 0; k < 2*i+1; k++)
            {
                cout<<"*";
            }

                for (int h= 0; h <=n-i-1 ; h++)
                {
                    cout<<" ";
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