#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
	while(true){
	
	float x, y, a, b, c, d;
	float j;
	cout << "1) 3*x+y"  << endl;
	cout << "2) a*a+2*b+c" << endl;
	cout << "3) (a+b)/(c-a) *(x/y)" << endl;
	cout << "4) (a*a+(2*b)+c)/d" << endl;
	cout << "5) sqrt|a+b|" << endl;
	cout << "6) pow(x,-cos(y))" << endl;
	cout<<"\nplease select the number of your desired equation to solve :";
    cin >> j;
	if (j == 1)
	{
		cout << "Enter the value of x=";
		cin >> x;
		cout << "Enter the value of y=";
		cin >> y;
		cout << endl;
		cout << "3*x+y = " << 3 * x + y;
	}
	else if (j == 2)
	{
		cout << "Enter the value of a=";cin >> a;
		cout << "Enter the value of b=";cin >> b;
		cout << "Enter the value of c=";cin >> c;
		cout << endl;
		cout << "a*a+2*b+c = " << a * a + 2 * b + c << endl;
	}
	else if (j == 3)
	{
		cout << "Enter the value of a=";cin >> a;
		cout << "Enter the value of b=";cin >> b;
		cout << "Enter the value of c=";cin >> c;
		cout << "Enter the value of d=";cin >> d;
		cout << "Enter the value of x=";cin >> x;
		cout << "Enter the value of y=";cin >> y;
		cout << endl;
		cout << "(a+b)/(c-a)*2 + 2*b + c *(x/y)= " << (a + b) / (c - a) * (x / y) << endl;
	}
	else if (j == 4)
	{
		cout << "Enter the value of a=";cin >> a;
		cout << "Enter the value of b=";cin >> b;
		cout << "Enter the value of c=";cin >> c;
		cout << "Enter the value of d=";cin >> d;
		cout << endl;
		cout << "(a*a+(2*b)+c)/d= " << (a * a + (2 * b) + c) / d << endl;
	}
	else if (j == 5)
	{
		cout << "Enter the value of a=";cin >> a;
		cout << "Enter the value of b=";cin >> b;
		cout << endl;
		cout << "sqrt|a+b|=" << sqrt(abs(a + b)) << endl;
	}
	else if (j == 6)
	{
		cout << "Enter the value of x=";cin >> x;
		cout << "Enter the value of y=";cin >> y;
		cout << endl;
		cout << "pow(x,-cos(y))= " << pow(x, -cos(y)) << endl;
	}
	else cout << "invalid number";
		 string answer;
	 cout << "Do you want to solve another equation? (y/n) ";
    
     cin >> answer;

    if (answer != "y") break;
}
return 0;

}
