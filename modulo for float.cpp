#include <bits/stdc++.h>

using namespace std;

float func(float, float);


int main()
{
    cout << "A PROGRAM TO USE % FOR FLOAT IN CPP   XD\n\n\n\n";
    float a, b;
    cout <<"Enter the 1st number:\n";
    cin >> a;
    cout << "Enter the 2nd number:\n";
    cin >> b;

    cout << func(a, b);

}


float func(float a, float b)
{
    int a1 = a;
    int b1 = b;
    if (a1 >= 0 && b1 >= 0)
    {    
        float ans = (a1 % b1) - (a - a1) + (b-b1)*(a1/b1);
        if (ans >= 0)
        return ans;
        else
        return (-1) * ans;
    }
}
