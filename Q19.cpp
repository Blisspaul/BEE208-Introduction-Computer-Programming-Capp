#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;

int binaryToDecimal(string binary){
	int decimal =0;
	int power =0;
	for(int i=binary.length()-1; i>=0; i--){
		if(binary[i]=='1')
		decimal += pow(2, power); power++;
		
	}
	return decimal;
}

string decimalToHexadecimal(int decimal){
	string hex ="";
	if(decimal ==0)return "0";
	
	while(decimal>0){
		int remainder =decimal % 16;
		if(remainder<10)
		hex= char(remainder + 55)+ hex;
		decimal/= 16;
	}
	return hex;
}

string decimalToOctal(int decimal){
	string octal ="";
	if(decimal ==0)return"0";
	
	while(decimal>0){
		octal=char((decimal %8)+48)+ octal;
		decimal/=8;
	}
	return octal;
}

int main(){
	string binary;
	cout<<"Enter a binary:";
	cin>>binary;
	
	int decimal=binaryToDecimal(binary);
	cout<<"Decimal:"<<decimal<< endl;
	cout<<"Hexadecimal:"<<decimalToHexadecimal(decimal)<< endl;
	cout<<"Octal:"<<decimalToOctal(decimal)<<endl;
	
	return 0;
}
	

