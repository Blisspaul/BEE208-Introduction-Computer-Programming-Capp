#include<iostream>
using namespace std;

int main(){
	int choice;
	float voltage, current, power, resistance,energy, time;
	do{
		cout<<"\n===== Electrical Calculator Menu ====="<<endl;
		cout<<"1. Calculate Power"<<endl;
		cout<<"2. Calculate Resistance"<<endl;
		cout<<"3. Calculate Energy"<<endl;
		cout<<"4. Exit"<<endl;
		cout<<"Enter your choice:";
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
			cout<<"Resistance="<<resistance<<"ohms"<<"endl";
			}else{
				cout<<"Error:Current cannont be zero!"<<endl;
			}
		    break;
		    case 3:
		    	cout<<"Enter power(W):";
		    	cin>>power;
		    	cout<<"Enter time (hours):";
		    	cin>>time;
		    	energy=power*time;
		    	cout<<"Energy="<<energy<<"Wh"<<endl;
		    	break;
		    case 4:
		    	cout<<"Existing..."<<endl;
		    	break;
		    	default:
		    		cout<<"Invalid selection"<<endl;	
		}
	}while(choice !=4);
	return 0;
}
