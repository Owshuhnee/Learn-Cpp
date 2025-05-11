#include <iostream>
using namespace std;

int main() {

	int dogyears = 0;
	double humanyears = 0;

	cout << "Enter your dog's age: ";	
	cin >> dogyears;

		if (dogyears == 1) {
			humanyears = 10.5;
		} else if (dogyears == 2) {
			humanyears = 21;
		} else if (dogyears > 2) {
			humanyears = 21 + (dogyears - 2) * 4;
		}
		else {
			cout << "Error: Please enter a valid age." << endl;
			return 0;
		}
		cout << "Your dog is " << humanyears << " years old in human years." << endl;
		return 0;
	}
