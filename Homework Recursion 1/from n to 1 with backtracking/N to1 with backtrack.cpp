#include<iostream>
using namespace std;

void myFunction(int i, int n) {
	if (i > n) return;
	myFunction(i + 1, n);
	cout << i << endl;


}

int main() {
#ifndef ONLINE_JUDGE
// for getting input from input.txt
	freopen("input.txt", "r", stdin);
// for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	myFunction(1, n);


	return 0;
}