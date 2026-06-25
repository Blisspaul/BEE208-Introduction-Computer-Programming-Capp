#include <iostream>
using namespace std;
	
	int main(){
		double R, total =0.0;
		
		cout<< "Series Resistor Calculator\n";
		cout<<"Enter 5 resistor values:\n\n";
		
		for(int i=1; i<=5; i++){
			cout<<"Enter resistor" << i<<"value (ohms):";
			cin>> R;
			total+=R;
		}
		cout<<"\nTotal Resistance ="<< total<<"Ohms"<< endl;
		
		return 0;
	}
