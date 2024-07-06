#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    Take a day no. and print the corresponding day for
    for 1 print Monday
    for 2 Tuesday and so on gor 7 print Sunday
    */
    int day;
    // cout << "enter the day";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "MOnday";
        break;

    case 2:
        cout << "tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    case 4:
        cout << "Thursday";
        break;

    case 5:

        cout << "Friday";
        break;

    case 6:
        cout << "Saturday";
        break;

    case 7:
        cout << "Sunday";
        break;

        default:
        cout<< "invalid";
    }

    return 0;
}