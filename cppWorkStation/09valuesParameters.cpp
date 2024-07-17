#include <iostream>
using namespace std;

int add(int a, int b =100){
	return a+b;
}

int main(){
	int x = 10, y= 20;
	int result = add(x,y);
	cout << result<<endl;

	result = add(x);
	cout << result<<endl;

	return 0;
}

