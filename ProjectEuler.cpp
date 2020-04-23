#include <iostream>
#include <fstream>
#include <string>
#include "PuzzleHeader.h"
#pragma once


using namespace std;


int main()
{
	cout << "Maja's Project Euler puzzle solutions... \n";
	cout << "Choose puzzle number: \n";
	int PuzzleNumber;
	cin >> PuzzleNumber;

	switch (PuzzleNumber)
	{
	case 1:
		Puzzle_01();
		break;
	}
	

	return 0;
}