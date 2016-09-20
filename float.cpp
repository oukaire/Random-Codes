#include <iostream>
using namespace std;

float some_math(float n)
{
	if(n <= 1)
		return 0;
	return 1.0 + some_math(n / 2.0);
}

int main() {
	int a;
	cin >> a;

	cout << some_math(a) << endl;

	return 0;
}
