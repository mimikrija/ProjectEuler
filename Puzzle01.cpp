#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <numeric>
#include "PuzzleHeader.h"

using namespace std;

bool IsMultipleOf3Or5(int Candidate)
{
	if (Candidate % 3 == 0 || Candidate % 5 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Puzzle_01()
{
	// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
	// Find the sum of all the multiples of 3 or 5 below 1000.
	cout << "Find the sum of all the multiples of 3 or 5 below 1000.\n";

	vector<int> Numbers(999);
	std::iota(Numbers.begin(), Numbers.end(), 1);

	int Solution = 0;

	for (auto Number : Numbers)
	{
		if (IsMultipleOf3Or5(Number)) Solution += Number;
	}

	//Solution = accumulate(Numbers.begin(), Numbers.end(), 0, [](int OneNumber) { OperatorIsMultipleOf3Or5(OneNumber); });

	cout << "That sum is " << Solution << "!\n";

	
	
}