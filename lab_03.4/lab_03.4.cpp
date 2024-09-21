#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x,y,R;
	cout << "x,y = ";
	cin >> x >> y;
	cout << "R = ";
	cin >> R;
	//								сегмент									        ||				трикутники
	if (  ((x >= 0 && x <= R) && (y <= sqrt(R*R - x*x) && y >= -sqrt(R*R - x*x))) || ((x <= 0 && x >= -R) && ((y <= R && y >= -x) || (y >= -R && y <= x)))) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}
	system("pause");
}