#include <iostream>
#include<string>
using namespace std;
const double doc = 1.0 / 12.0;
const double half = 6.0 / 12.0;
string toRoman(float n);
int main()
{
	float dec;
	string roman;
	cin >> dec;
	roman+=toRoman(dec);

	cout << roman;
	return 0;
}

string toRoman(float n) {
	if (n < doc) {
		return "";
	}
	if (n >= 1) {
		return "l" + toRoman(n - 1);
	}
	if (n >= half) {
		return "S" + toRoman(n -half);
	}
	if (n >= doc)
	{
		return "*" + toRoman(n - doc);
	}
	
}
