#include <iostream>
using namespace std;

int main()
{
    double initial_amount, interest_rate;
    int years;
    cout << "Enter the initial amount: "; cin >> initial_amount;
    cout << "Enter the number of years: "; cin >> years;
    cout << "Enter interest rate (percent per year): "; cin >> interest_rate;
    interest_rate = interest_rate / 100;
    int i = 0;
    while (i < years)
    {
        initial_amount += (initial_amount * interest_rate);
        i++;
    }
    cout << "At the end of " << years << " years, you will have $" << initial_amount << endl;
    return 0;
}
