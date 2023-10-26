#include <iostream>
#include <cmath>
using namespace std;
int main(){
 int x, y, z, n;
 double a, b, c, d, result, result_j = 0, result_i = 0;
 cout<<"Enter the value of a: "; cin>>a;
 cout<<"Enter the value of b: "; cin>>b;
 cout<<"Enter the value of c: "; cin>>c;
 cout<<"Enter the value of x: "; cin>>x;
 cout<<"Enter the value of y: "; cin>>y;
 cout<<"Enter the value of z: "; cin>>z;
 cout<<"Enter the value of n: "; cin>>n;
 for(int j=1; j<=n; j++){
   d = pow(b,y)*pow(c,z);
   result_j += d;
 }
 for(int i=1; i<=n; i++){
   result = pow(a,x)/result_j;
   result_i += result;
 }
 cout<<"The solution of the equation is "<< result_i<<endl;
 return 0;
}
