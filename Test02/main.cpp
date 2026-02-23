#include <iostream>

#define DEFAULT_SIZE 100
using namespace std;

int main() {
	
	int length;


	do {
		cout << "Input size of array: ";
		cin >> length;
	} while (length <= 0);

	int count = 0;

	while (length > 0) {
		length /= 2;
		count++;
	}

	cout << "Result: " << count << endl;

	return 0;
}