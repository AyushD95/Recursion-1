#include<iostream>
using namespace std;

void myFunction(int i, int n) {

	if (i < 1) return ;
	cout << i << endl;
	myFunction(i - 1, n);


}

int main() {

	int n;
	cin >> n;
	myFunction(n, n);



	return 0;
}