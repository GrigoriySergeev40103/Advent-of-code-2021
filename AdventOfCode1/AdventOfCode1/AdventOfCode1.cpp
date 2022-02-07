// AdventOfCode1.cpp : Defines the entry point for the application.
//

#include "AdventOfCode1.h"

using namespace std;

int main()
{
	//  FIRST HALF
	/*

	// File from wich we read mesurments
	ifstream InputFile("C:\\Users\\Professional\\Downloads\\input.txt");
	// Number of times mesurments increased
	uint32_t TimesIncreased = 0;

	string Line;
	// reading first line
	getline(InputFile, Line);
	uint32_t PreviousNumber = stoul(Line);
	uint32_t Number;
	// Reading line by line starting from 2-nd row
	for (; getline(InputFile, Line);)
	{
		Number = stoul(Line);

		if (Number > PreviousNumber)
			TimesIncreased++;

		PreviousNumber = Number;
	}

	cout << TimesIncreased << endl;

	*/


	// SECOND HALF

	// File from wich we read mesurments
	ifstream InputFile("../../../../AdventOfCode1/input.txt");
	// Number of times mesurments window increased
	uint32_t TimesIncreased = 0;

	// First component of mesurment window
	uint32_t MesurmentWindow[3];
	
	// Lines that we gonna read from the input file
	string ReadLine;

	// Reading first mesurment window
	getline(InputFile, ReadLine);
	MesurmentWindow[0] = stoul(ReadLine);
	getline(InputFile, ReadLine);
	MesurmentWindow[1] = stoul(ReadLine);
	getline(InputFile, ReadLine);
	MesurmentWindow[2] = stoul(ReadLine);

	// Reading the rest of mesurments window and comparing them
	for (; getline(InputFile, ReadLine);)
	{
		static uint32_t SumOfMesurmentWindow;
		static uint32_t SumOfNextMesurmentWindow;
		SumOfMesurmentWindow	 = MesurmentWindow[0] + MesurmentWindow[1] + MesurmentWindow[2];
		SumOfNextMesurmentWindow = 0;

		// Getting the next mesurment window
		MesurmentWindow[0] = MesurmentWindow[1];
		MesurmentWindow[1] = MesurmentWindow[2];
		MesurmentWindow[2] =	stoul(ReadLine);

		SumOfNextMesurmentWindow = MesurmentWindow[0] + MesurmentWindow[1] + MesurmentWindow[2];

		if (SumOfNextMesurmentWindow > SumOfMesurmentWindow)
			TimesIncreased++;
	}

	cout << TimesIncreased << endl;

	return 0;
}
