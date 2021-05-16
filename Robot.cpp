#include <iostream>
#include <vector>
#include "Robot.h"
using namespace std;



int main() {

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			grid[i][j] = '.';
	grid[3][8] = 'B';
	grid[2][6] = 'C';

	print2D(grid,10);

	robot R1(2, 7, 0, '.');
	robot R2(6, 3, 0, '.');

	cout << "R1's location is: " << R1.getx() << ", " << R1.gety() << endl;
	R1.moveTo(5, 3);
	cout << "R1's location is: " << R1.getx() << ", " << R1.gety() << endl;

	return 0;
}