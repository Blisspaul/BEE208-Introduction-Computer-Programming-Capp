#include<iostream>
using namespace std;

int main(){
	double current;
	
	cout<<"Current Monitoring System\n";
	cout<<"Enter current readings(A) -stops when>10A\n\n";
	
	while(true){
		cout<<"Enter current readings(A):";
		cin>>current;
		
		if(current <=10.0){
			cout<<"Safe:"<<current<<"A"<<endl;
			
		}else{
			cout<<"\n***Overcurrent detected.Monitoring stopped.***\n";
			break;
		}
	}
	return 0;
}
