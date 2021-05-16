#pragma once
#ifndef ROBOT_H
#define ROBOT_H
#include <iostream>
using namespace std;

class robot {
private:
	int xLocation;
	int yLocation;
	bool cargoEmpty;  //empty false
	char load;

public:
	robot(int x, int y, bool cargo, char letter) {
		int xLocation = x;
		int yLocation = y;
		bool cargoEmpty = cargo;
		char load = letter;
	}
	int getx() { return xLocation; }
	void setx(int newx) { xLocation = newx; }
	int gety() { return yLocation; }
	void sety(int newy) { yLocation = newy; }
	char checkLoad() { return load; }
	void setLoad(char newload) { load = newload; }
	
	bool moveTo(int lx, int ly) {
		if (lx > 9 or ly > 9)
			return 0;
	else
		if (lx > xLocation)
				for (int i = xLocation; i < lx; i++)
					xLocation++;
		if (ly > yLocation)
			for (int i = yLocation; i < ly; i++)
				yLocation++;
		if (lx < xLocation)
			for (int i = xLocation; i > lx; i--)
				xLocation--;
		if (ly < yLocation)
			for (int i = yLocation; i > ly; i--)
				yLocation--;

	}
	bool pickup(int lx, int ly);
	bool dropOff();








};

char grid[10][10];


void print2D(char z[10][10], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
			cout << z[i][j] << " ";
		cout << endl;
	}
}











#endif