#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double radius, area;
	const double PI = 3.142;
	
	cout<<"Enter radius:";
	cin>> radius;
	
	area= PI *pow(radius,2);
	
	cout<<"Area of circle = " <<area << endl;
	
	return 0;
	
}

