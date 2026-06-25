#include<iostream>
using namespace std;

int main(){
	float power;
	float totalLoad=0;
	
	cout<<"=====Electrical Load Limit Checker ====="<<endl;
	cout<<"Maximum load limit:3000W"<<endl;
	
	while(totalLoad<=3000){
		cout<<"Enter appliance power reting (W):";
		cin>>power;
		
		if(totalLoad+power>3000){
			cout<<"Load limit exceeded."<<endl;
			break;
		}else{
			totalLoad+=power;
			cout<<"Current totalload:"<<totalLoad<<"w"<<endl;
		}
	}
	cout<<"Final total load:"<<totalLoad<<"W "<<endl;
	
	return 0;
}
