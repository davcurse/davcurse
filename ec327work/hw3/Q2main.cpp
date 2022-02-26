#include "Q2.h"
#include <iostream>
using namespace std;
int main(){

	string test="protocol";
	cout<<"String before `replace` operation "<<test<<endl;
	char source='o';
	char target='x';
	replace(test,source,target);
	cout<<"String after `replace` operation "<<test<<endl;

	test="buec327";
	char source1[2]={'3','7'};
	char target1[2]={'4','0'};
	cout<<"String before `replace` operation "<<test<<endl;
	replace(test,source1[0],target1[0]);
	replace(test,source1[1],target1[1]);
	cout<<"String after `replace` operation "<<test<<endl;
	return 0;

}
