#include <iostream>
using namespace std;

int main()
{
	//creating variables for inputs (mx, my), outputs (gx, gy), and maximums for my coordianate systems
	int mx, my, gx, gy, mxmax = 20, mymax = 20, gxmax = 200, gymax = 100;
	
	//getting value for mx
	cout << "Input Mx: ";
	cin >> mx;

	//getting value for my
	cout << "Input My: ";
	cin >> my;

	//formula for transforming mx into gx
	gx = (mx + mxmax) * (gxmax / (mxmax * 2));

	//formula for transforming my minto gy
	gy = gymax - 2.5 * (my + mymax);

	//final output
	cout << "Gx = " << gx << ", Gy = " << gy << ".";
	return 0;
}
