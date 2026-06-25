#include<iostream>
using namespace std;

int main(){
	float voltage;
	
	cout<<"=====Battery Voltage Test====="<<endl;
	cout<<"Testing up to 10 battery voltage readings..."<<endl;
	
	for(int i=1;i<=10;i++){
		cout<<"Enter battery voltage readings"<<i<<":";
		cin>>voltage;
		
		if(voltage<10.5){
			cout<<"Low battery detected.Test stopped."<<endl;
			break;
		}else{
			cout<<"Battery voltage normal"<<endl;
		}
	}
	return 0;
}
