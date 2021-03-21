#include <bits/stdc++.h>

using namespace std;

void func(float, float);

int main()
{
    cout << "A PROGRAM TO USE % FOR FLOAT IN CPP   XD\n\n\n\n";
    float a, b;
    cout << "Enter the 1st number:\n";
    cin >> a;
    cout << "Enter the 2nd number:\n";
    cin >> b;
    cout << "The modulo of the function is: ", func(a, b);
    ;
}

void func(float X, float N)
{
    return ((X >= 0 ? X : -X) >= (N >= 0 ? N : -N)) ? (func(X - N, N)) : X;
}

