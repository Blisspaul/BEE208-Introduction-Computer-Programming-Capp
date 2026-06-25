#include<iostream>
using namespace std;

int main(){
	int choice;
	float voltage, current, power, resistance, energy, time;
	
	cout<<"=====Electrical Calculation Menu ====="<<endl;
	cout<<"1.Calculate DC Power"<<endl;
	cout<<"2.Calculate Resistance using Ohm's Law"<<endl;
	cout<<"3.Calculate Energy Consumption"<<endl;
	cout<<"Enter your choice(1-3):";
	cin>>choice;
	
	switch(choice){
		case 1:
			cout<<"Enter voltage(V):";
			cin>>voltage;
			cout<<"Enter current(A):";
			cin>>current;
			power=voltage*current;
			cout<<"Power="<<power<<"W"<<endl;
			break;
		case 2:
		    cout<<"Enter voltage(V):";
		    cin>>voltage;
		    cout<<"Enter current(A):";
		    cin>>current;
			if(current !=0){
				resistance=voltage/current;
				cout<<"Resistance="<<resistance<<"Ohms"<<endl;
			}else{
				cout<<"Error: Current cannot be zero!"<<endl;
			}
			break;
		case 3:
			cout<<"Enter power(W):";
			cin>>power;
			cout<<"Enter time(hours):";
			cin>>time;
			energy=power*time;
			cout<<"Energy="<<energy<<"Wh"<<endl;
			break;
		default:
			cout<<"Invalid selection"<<endl;
	}
	return 0;
}
