#include <iostream>
using namespace std;

bool prime(int n) {
	if (n <= 0) {
		return false;
	}
	for (int i = 2; i * i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}


int main() {
	int num;
		cout << "Enter a number: ";
		cin >> num;
		if (prime(num))
		{
			cout <<" " << num<<" " << "is prime: " << endl;
		}
		else {
			cout<<" " << num<<" " << "is not prime: " << endl;
		}
		return 0;
}

