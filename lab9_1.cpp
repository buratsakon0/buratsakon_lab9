#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double loan, rate, ppy, interest, total;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> ppy;

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
	
	int i = 1;
    while( loan > 0){
        cout << fixed << setprecision(2); 
    	cout << setw(13) << left << i; 
    	cout << setw(13) << left << loan;
    	interest = loan * (rate/100);
    	cout << setw(13) << left << interest;
    	total = loan + interest;
    	    if(total < ppy)
    	        ppy = total;
    	cout << setw(13) << left << total;
    	cout << setw(13) << left << ppy;
    	loan = total - ppy;
    	cout << setw(13) << left << loan;
    	
        cout << "\n";
        i++;
    }
	
	
	return 0;
}