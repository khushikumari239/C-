#include <bits/stdc++.h>

using namespace std;
int CountEvenlyDivisibleDigit (int n) {
    int count=0;
    int original=n;

    while (n>0) {
        int digit =n%10;
        n/=10;
    
    if (digit !=0 && original %digit==0) {
        count++;
    }

}
 return count;
}

    int main()
{
    int n=120;
    int result=CountEvenlyDivisibleDigit(n);

    cout <<  "No . of digits in the ofdigits evenly divisible by digit are"<<n<<endl; cout << "Number of digits: " << endl;

    return 0;
}