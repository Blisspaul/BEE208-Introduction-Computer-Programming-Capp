#include<iostream>
using namespace std;

int main(){
	double voltage;
	
	cout<<"Battery Voltage Monitoring System\n";
	cout<<"Enter voltage readings-stops when<12V\n\n";
	
	while(true){
		cout<<"Enter battery voltage(Volts):";
		cin>>voltage;
		
		if(voltage>=12.0){
			cout<<"Voltage:"<<voltage<<"V-OK"<<endl;
		}else{
			cout<<"\n*** Battery voltage low.Recharge required.***\n";
			break;
		}
	}
	return 0;
	
}
