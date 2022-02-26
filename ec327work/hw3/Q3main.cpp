#include "Q3.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{

	string classname="EC327";
	string filename="grades.txt";
	cout<<"Average grade for students in "<<classname<<" is "<<calculateAverage(classname,filename)<<endl;

	classname="EC440";
	filename="grades.txt";
	cout<<"Average grade for students in "<<classname<<" is "<<calculateAverage(classname,filename)<<endl;
	return 0;
}
