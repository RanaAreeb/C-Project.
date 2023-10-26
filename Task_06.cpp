#include<iostream>
#include<string>
using namespace std;
int main() 
	
{
	while(true){
	float a, d, y, w, x;
	cout << "Where do you want to travel:" << endl;
	cout << "1) Lahore" << endl;
	cout << "2) Karachi" << endl;
	cout << "3) Quetta" << endl;
	cout << "4) Peshawar" << endl;
	cout << "THE MAIN STATION IS 'THE RAWALPINDI RAILWAY STATION'"<<endl;
	cout << "\nEnter the number of the city where you want to travel: " ;
	cin >> x;
	if (x==1) 
	{
		cout << "You selected 'Rawalpindi to Lahore'"<<endl;
		cout << endl;
		cout << " In which class you want to travel :"<<endl;
		cout << "1) Executive Class"<<endl;
		cout << "2) Lower A/C " << endl;
		cout << "3) Economy class"<<endl;
		cout << endl;
		cout << "Enter The Class Number : ";
		cin >> y;
		if (y == 1)
		{
			cout<<"Executive class"<<endl;
			cout << "Ticket price of executive class is 3000 excluding tax."<<endl;
			cout << "Inculding 15% tax "<<endl;
			d = 3000 * 15 / 100;
			cout << endl;
			cout << "Ticket price = " << d + 3000 <<endl;
			cout << "Number of seats to book:";
			cin >> w;
			cout << endl;
			cout << "Total bill :"  << w * (d + 3000);
			cout << endl;

		}
		else if (y == 2)
		{
			cout<<"Lower A/C"<<endl;
			cout << "Ticket price of Lower A/C is 2500 excluding tax."<<endl;
			cout << "Including 15% tax  "<<endl;
			d = 2500 * 15 / 100;
			cout << endl;
			cout << "Ticket price = " << d + 2500 <<endl;
			cout << endl;
			cout << "Number of seats to book:";
			cin >> w;
			cout << endl;
			cout << "Total bill :"  << w * (d + 2500);
			cout << endl;
		}
		else if(y == 3)
		{
			cout << "Economy class "<< endl;
			cout << "Ticket price of Economy class is 1500 excluding tax\n";
			cout << "Including 15% tax  "<<endl;
			d = 1500 * 15 / 100;
			cout << endl;
			cout << " Ticket price = " << d + 1500;
			cout << endl;
			cout << "Number of seats to book:";
			cin >> w;
			cout << endl;
			cout << "Total bill :"  << w * (d + 1500);
			cout << endl;
		}
	}
	else if(x == 2) 
	{
		cout << "You selected 'Rawalpindi to Karachi'" << endl;
		cout << endl;
		cout << "In which class you want to travel :"<<endl;
		cout << "1) Executive Class"<<endl;
		cout << "2) Lower A/C "<<endl;
		cout << "3) Economy class"<<endl;
		cout << "4) First Class Sleeper"<<endl;
		cout << "5) Economy class Sleeper"<<endl;
		cout << "Enter The Class Number: ";
		cin >> y;
		if (y == 1) 
		{
			cout << "Executive class." << endl;
			cout << "Ticket price of executive class is 6000 excluding tax." << endl;
			cout << "Inculding 15% tax "<<endl;
			d = 6000 * 15 / 100;
			cout << endl;
			cout << "Ticket Price = " << d + 6000 <<endl;
			cout << "Number of seats to book";
			cin >> w;
			cout << endl;
			cout << "Total bill :"<< w * (d + 6000);
			cout << endl;
		}
		else if(y == 2) 
		{
			cout << "Lower A/C"<<endl;
			cout << "Ticket price of executive class is 4500 excluding tax." << endl;
			cout << "Including 15% tax " << endl;
			d = 4500 * 15 / 100;
			cout << endl;
			cout << "TIcket Price = " << d + 4500<<endl;
			cout << endl;
			cout << "Number of seats to book:";
			cin >> w;
			cout << endl;
			cout << "Total bill :" << w * (d + 4500);
			cout << endl;
		}

		else if(y == 3) 
		{
			cout << "Economy class " << endl;
			cout << "Ticket price of executive class is 2000 excluding tax.\n";
			cout << "Including 15% tax  " << endl;
			d = 2000 * 15 / 100;
			cout << endl;
			cout << "Ticket price = " << d + 2000<<endl;
			cout << endl;
			cout << "Number of seats to book:";
			cin >> w;
			cout << endl;
			cout << "Total bill :" << w * (d + 2000);
			cout << endl;
		}
		else if(y == 4) 
		{

			cout << "First Class Sleeper " << endl;
			cout << "Ticket price of executive class is 3900 excluding tax." << endl;
			cout << "including 15% tax  "<<endl;
			d = 3900 * 15 / 100;
			cout << "TIcket price = " << d + 3900 <<endl;
			cout << "Number of seats to book : ";
			cin >> w;
			cout << "Total bill :" << w * (d + 3900);
			cout << endl;

		}
		else if(y == 5) 
		{
			cout << "Economy Sleeper\n";
			cout << "The price of ticket in Economy Sleeper is 3500 without tax"<<endl;
			cout << "including 15% tax "<<endl;
			d = 3500 * 15 / 100;
			cout << "Total price of ticket = " << d + 3500<<endl;
			cout << endl;
			cout << "Enter how many seats you want to book:";
			cin >> w;
			cout << "Total bill : " << w * (d + 3500);
			cout << endl;
		}
	}
	else if(x == 3) 
        {
		cout << "You selected 'Rawalpindi to Peshawar'" << endl;
		cout << endl;
		cout << "Select Your Desired Class In Which You Want to Travel In :" << endl;
		cout << "1)First Class Sleeper" << endl;
		cout << "2)Economy Sleeper" << endl;
		cout << "Enter the number please:";cin >> y;cout << endl;
		if (y == 1) 
		{
			cout << "First Class Sleeper " << endl;
			cout << "Ticket price of executive class is 4000 excluding tax." << endl;
			cout << "including 15% tax  "<<endl;
			d = 4000 * 15 / 100;
			cout << "Ticke price = " << d + 4000;
			cout << endl;
			cout << "Number of seats to book:";
			cin >> w;
			cout << endl;
			cout << "Total bill :"  << w * (d + 4000);
			cout << endl;

		}
		else if(y == 2) 
		{
			cout << "Economy Sleeper"<<endl;
			cout << "Ticket price of executive class is 3500 excluding tax."<<endl;
			cout << "including 15% tax "<<endl;
			d = 3500 * 15 / 100;
			cout << "Ticket price = " << d + 3500<<endl;
			cout << endl;
			cout << "Number of seats to book:";cin >> w;
			cout << "Total bill : "  << w * (d + 3500);
			cout << endl;
		}
	}
	else if(x == 4) 
        {
		cout << "You selected 'Rawalpindi to Quetta'" << endl;
		cout << endl;
		cout << "Select Your Desired Class In Which You Want to Travel In :"<<endl;
		cout << "1) Executive Class"<<endl;
		cout << "2)Lower A / C "<<endl;
		cout << "3)Economy class"<<endl;
		cout << "Enter the number please: ";cin >> y; cout << endl;
		if (y == 1) 
		{
			cout << "Executive class." << endl;
			cout << "Ticket price of executive class is 5600 excluding tax." << endl;
			cout << "Inculding 15% tax "<<endl;
			d = 5600 * 15 / 100;
			cout << endl;
			cout << "Ticket price = " << d + 5600<<endl;
			cout << "Number of seats to book:";cin >> w;
			cout << endl;
			cout << "Total bill :"  << w * (d + 5600);
			cout << endl;
		}
		else if(y == 2) 
		{
			cout << "Lower A/C class"<<endl;
			cout << "Ticket price of executive class is 4500 excluding tax."<<endl;
			cout << "including 15% tax "<<endl;
			d = 4500 * 15 / 100;
			cout << endl;
			cout << "Ticket price = " << d + 4500<<endl;
			cout << endl;
			cout << "Number of seats to book:";cin >> w;
			cout << endl;
			cout << "Total bill :" << w * (d + 4500);
			cout << endl;
		}
		else if(y == 3) 
		{

			cout << "Economy class " << endl;
			cout << "Ticket price of executive class is 2000 excluding tax."<<endl;
			cout << "including 15% tax  " << endl;
			d = 2000 * 15 / 100;
			cout << endl;
			cout << "Ticket price = " << d + 2000;
			cout << endl;
			cout << "Number of seat to book:";cin >> w; cout << endl;
			cout << "Total bill :" << w * (d + 2000);
			cout << endl;
		}
	}
	else cout << "invalid number";

	 string answer;
	 cout << "Do you want to book another ticket? (y/n) ";
    
     cin >> answer;

    if (answer != "y") break;

}
return 0;
}
