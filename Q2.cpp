#include<iostream>
using namespace std;

int main(){
	float ratedCurrent,measuredCurrent;
	
	cout<<"Enter rated current of circuit breaker:";
	cin>>ratedCurrent;
	
	cout<<"Enter measured current in circuit:";
	cin>>measuredCurrent;
	
	if(measuredCurrent>ratedCurrent){
		cout<<"Overload detected. Circut breaker should trip."<<endl;
	}
	else{
		cout<<"Current is within safe limit."<<endl;
	}
	return 0;
}
