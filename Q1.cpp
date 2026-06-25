#include<iostream>
using namespace std;

int main(){
	float voltage;
	
	cout<<"Enter voltage reading:";
	cin>>voltage;
	
	if(voltage<0){
		cout<<"Invalid voltage reading"<<endl;
	}
	else if(voltage<=50){
		cout<<"Low voltage (0-50 V)"<<endl;
	}
	else if(voltage<=240){
		cout<<"Normal voltage (51-240 V)"<<endl;
	}
	else if(voltage<=415){
		cout<<"High voltage(241-415 V)"<<endl;
	}
	else{
		cout<<"Dangerous voltage(above 415 V)"<<endl;
	}
	return 0;
}
