#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main() {

	int num1 = 0, num2 = 0, ans = 0;
	char a;

	cout << "Enter the first number";
	cin >> num1;

	cout << "Enter an action sign ( +,-,/,*)";
	cin >> a;

	cout << "Enter the second number";
	cin >> num2;
	switch (a) {
	case '+' :
		ans = num1 + num2;
		break;
	case '-' :
		ans = num1 - num2;
		break;
	case '*':
		ans = num1 * num2;
		break;
	case '/':
		if (!num2) {
			ans = num1 / num2;
		}
		else {
			cout << "Divide by 0 error!" << endl;
			return 1;
		}
		break;
	default:
		cout << "Error: Invalid action sign." << endl;
		return 1; 
	}
	cout << "Answer :" << ans;
	return 0;
}


