#include <iostream>
using namespace std;

int main(){
	double voltage,total=0.0,average;
	const int READING =10;
	
	cout<<"Average Voltage Calculator\n";
	cout<<"Enter "<<READING<<"voltage readings:\n\n";
	
	for (int i= 1;i<= READING; i++)
{
		

cout<<"Enter reading"<<i<<"(Voits):";
cin>>voltage;
total+= voltage;
}
average=total/READING;
cout<<"\nAverage Voltage="<<average<<"V"<<endl;

return 0;
}
