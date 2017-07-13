#include <iostream>

using namespace std;

#define MIN(a,b)  (a < b? a: b)


int main() {
	float a, b,c ;
	cin >> a >> b;
	c = MIN(a,b);
	cout << c << endl;
	return 0;
}
