#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    double x, y, z, a, b, c, d, result = 0;
    cout<< "Enter the value of x: "; cin>>x;
    cout<< "Enter the value of y: "; cin>>y;
    cout<< "Enter the value of z: "; cin>>z;
    cout<< "Enter the value of a: "; cin>>a;
    cout<< "Enter the value of b: "; cin>>b;
    cout<< "Enter the value of n: "; cin>>n;
    
    for(int i=1; i<=n; i++)
    {
        c = pow((pow(x,2)*pow(y,2)/z),(1/2));
        d = a * b;
        result += c/d;
    }
    cout<<"Solved equation is equal to "<<result<<endl;
    return 0;
}
