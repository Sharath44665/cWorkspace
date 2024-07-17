#include <iostream>
using namespace std;

static int counter = 10; // static and global variable


void demoFunction(void){
	static int i = 5; // local static variable
	i += 1;
	cout<<"i val is: "<<i << " counter val is: "<< counter<<endl;
}

int main(){

	while (counter--){
		demoFunction();
	
	}
	
	return 0;
}


