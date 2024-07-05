#include <bits/stdc++.h>
using namespace std;

/*
Problem 1:- A School has following rules for grading system :
a. Below 25 -F
b. 25 to 44 -E
b. 45 to 49 -D
c. 50 to 59 -C
c. 60 to 79 -B
c. 80 to 100 -A

Asking the user to enter marks and print the corresponding grade...
*/
int main()
{
    int Marks;
    cout << "enter Marks";
    cin >> Marks;
    cout << "Marks entered: " << Marks << endl;
    if (Marks < 25)
    {
        cout << "grade=F";
    }
    else if (Marks >= 25 && Marks <= 44)
    {
        cout << "grade=E";
    }
    else if (Marks >= 45 && Marks <= 49)
    {
        cout << "grade=D";
    }
    else if (Marks >= 50 && Marks <= 59)
    {
        cout << "grade=C";
    }
    else if (Marks >= 60 && Marks <= 79)
    {
        cout << "grade=B";
    }
    else if (Marks >= 80 && Marks <= 100)
    {
        cout << "grade=A";
    }

    else
    {
        cout << "invalid marks";
    }

    return 0;
}