//Factorial
#include<iostream>
using namespace std;
int main()
{
	int k, f = 1;

	cout << "Please, enter number for factorial calculation: ";
	cin >> k;

	while (k>1) {

		f *= k--;
	}
	cout << "Factorial of entered number: " << f << endl;
	return 0;
}
