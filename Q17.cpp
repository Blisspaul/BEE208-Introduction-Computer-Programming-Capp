#include <iostream>
using namespace std;

int main(){
	int num ;
	cout<<"Enter an integer:";
	cin>> num;
	 
	 if(num > 0 && (num &(num -1))== 0)
	 cout<< num <<"is not a power of 2"<< endl;
	 
	 else
	 cout<< num <<"is not a power of 2"<< endl;
	 
	 return 0;
}
