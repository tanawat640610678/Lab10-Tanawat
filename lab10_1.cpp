#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	double loan,interest,payment;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	double prevBalance = loan;
	int year = 1;
	double inter,total;
	do {

	
	cout << setw(13) << left << year; 
	cout << setw(13) << left << prevBalance;

	inter = (prevBalance*interest)/100;
    cout << setw(13) << left << inter;

	total = prevBalance + inter;
	cout << setw(13) << left << total;

	if(payment > total){

		payment = total;

	}
	cout << setw(13) << left << payment;
    prevBalance = total - payment;
	cout << setw(13) << left << prevBalance;
	cout << "\n";	
	year++;
	}while(prevBalance != 0);
	return 0;
}
