#include<iostream>
using namespace std;

void myFunction(int i, int n) {
    if (i > n) return;
    cout << i << endl;
    myFunction(i + 1, n);



}

int main() {

    int n;

    cin >> n;

    myFunction(1, n);

    return 0;

}
