#include <iostream>
using namespace std;
int main()
{
    int long long divident = 10;
    int long long divisor = 3;
    int long long quotient = 0;

    int sign = 0;

    if((divident > 0 && divisor < 0))
    {
        sign = 1;
        divisor = -(divisor);

    }

    else if((divident < 0 && divisor > 0))
    {
        sign = 1;
        divident = -(divident);
    }

    else if((divident < 0 && divisor < 0))
    {
        sign = 0;
        divident = -(divident);
        divisor = -(divisor);
    }

// 7 - 3 = 4 4 -3 = 1

    while((divident - divisor) >= 0)
    {
        quotient++;
        divident -= divisor;
    }


    if(sign == 1)
        quotient = -(quotient);

    cout<<quotient;
    return 0;
}