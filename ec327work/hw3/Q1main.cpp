#include "Q1.h"
#include <iostream>
using namespace std;
int main(){

	int a,b;
	//Test case 2:
	a=88;
	b=66;
	cout<<"Greatest Common Divisor (GCD) of "<<a<<" and "<<b<<" is : "<<gcd(a,b)<<endl;
	//Test case 3:
	a=12;
	b=12;
	cout<<"Greatest Common Divisor (GCD) of "<<a<<" and "<<b<<" is : "<<gcd(a,b)<<endl;
	//Test case 4:
	a=18;
	b=24;
	cout<<"Greatest Common Divisor (GCD) of "<<a<<" and "<<b<<" is : "<<gcd(a,b)<<endl;
	//Test case 6:
	a=13;
	b=37;
	cout<<"Greatest Common Divisor (GCD) of "<<a<<" and "<<b<<" is : "<<gcd(a,b)<<endl;
	//Test case 7:
	a=83;
	b=84;
	cout<<"Greatest Common Divisor (GCD) of "<<a<<" and "<<b<<" is : "<<gcd(a,b)<<endl;
	return 0;

}
