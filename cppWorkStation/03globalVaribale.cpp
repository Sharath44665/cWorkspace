#include<iostream>

using namespace std;

int g; // global variable

int main(){
	int a, b, c;

	a=5;
	b=2;
	c= a+b;

	g= a+b;

	cout <<c<<endl;
	cout <<g<<endl;

	return 0;
}

