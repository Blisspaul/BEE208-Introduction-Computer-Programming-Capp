#include <iostream>

using namespace std;

int main(){
	
	int a;
	int b;
	cout<<"Enter two integers:" << "\n";
	cout << "Enter first value: ";
	cin >> a;
	cout << "Enter second value: ";
	cin >> b;
	
	cout<< "Sum = "<< a+b<< endl;
	cout<< "Difference = "<<a-b<< endl;
	cout<<"Product= "<<a*b<< endl;
	
	if (b!=0)
	cout<<"Quotient = "<< a/b<< endl;
	
	else
	cout<<"Quotient = undefined (division by zero)"<< endl;
	
	return 0;
}
