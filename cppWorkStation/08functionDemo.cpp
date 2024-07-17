#include <iostream>
using namespace std;

int findMax(int n1, int n2);

int main(){
	int a = 100;
	int b = 20;

	int val = findMax(a,b);

	cout << "max val is: "<<val<<endl;
	return 0;
}

int findMax(int x, int y){
	if (x > y){
		return x;
	}
	return y;
}
