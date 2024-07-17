#include <iostream>
using namespace std;

int main(){
	int a [5];

	for(int idx = 0; idx<5; idx++){
		a[idx] = 10*(idx+1);
	}

	// print
	for(int idx = 0; idx<5;idx++){
		cout<<a[idx]<<endl;
	}
	
	//cout << a<<endl;
	
	int arr[5] = {100, 200, 300, 400, 500};

	for(int idx =0; idx<5;idx++){
		cout<<arr[idx]<<" ";
	}

}



