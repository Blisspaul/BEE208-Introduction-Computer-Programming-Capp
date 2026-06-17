#include <iostream>
using namespace std;

int main (){
	int a, b;
	cout<<"Enter two integer:";
	cin >> a >>b;
	
	int larger = (a > b)? a: b;
	cout <<"Larger value = "<<larger << endl;
	
	return 0;
}
