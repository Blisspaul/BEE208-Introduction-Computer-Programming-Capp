#include<iostream>
using namespace std;

int main(){
	int password;
	const int correctpassword=7272;
	
	cout<<"Enter password:";
	cin>>password;
	
	while(password != correctpassword)
	{
		cout<<"Incorrectpassword.Try again:";
	}
	cout<<"Access granted to control panel"<<endl;
	
	return 0;
}
