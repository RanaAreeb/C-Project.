#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    double x, x_avg = 1;
    cout<< "Enter the value of x: "; cin>>x;
    cout<< "Enter the value of n: "; cin>>n;
    for(int i=1; i<=n; i++)
    {
        x_avg *= x;
    }
    x_avg = pow(x_avg, 1.0/n);
    cout<<"Solved equation is equal to "<<x_avg<< endl;
    return 0;
}
