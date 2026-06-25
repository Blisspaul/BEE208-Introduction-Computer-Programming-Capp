#include <iostream>
using namespace std;

int main(){
	double current;
	int safe=0,unsafe=0;
	const int READINGS=8;
	
	cout<<"Current Monitoring System\n";
	cout<<"Enter"<<READINGS<<"current readings\n\n";
	
	for(int i=1;i<=READINGS;i++)
	{
		cout<<"Enter reading"<<i<<"(Amperes):";
		cin>>current;
		
		if(current<=10.0){
			safe++;
			cout<<"SAFE(<=10A)\n";
			cout<<"UNSAFE(>10A)\n";
		}
	}
	cout<<"\n---Summary---\n";
	cout<<"Safe readings:"<<unsafe<<endl;
	
	return 0;567
}
