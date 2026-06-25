#include<iostream>
using namespace std;

int main(){
	float temp;
	float sum=0;
	int count=0;
	
	cout<<"=====Temperature Reading Analyzer ====="<<endl;
	
	for(int i=1;i<=10;i++){
		cout<<"Enter temperature reading"<<i<<"(^0C):";
		cin>>temp;
		
		if(temp<0){
			cout<<"Invalid reading(below0^0C). Skipping..."<<endl;
			continue;
		}
		sum +=temp;
		count++;
	}
	if(count>0){
		cout<<"Average temperature="<<(sum/count)<<"^0C"<<endl;
	}else{
		cout<<"No valid readings entered."<<endl;
	}
	return 0;
}
