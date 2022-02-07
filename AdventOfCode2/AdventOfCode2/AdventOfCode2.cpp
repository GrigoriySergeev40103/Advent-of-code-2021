// AdventOfCode2.cpp : Defines the entry point for the application.
//

#include "AdventOfCode2.h"

using namespace std;

int main()
{
	// FIRST HALF
	/*
	// File from wich we read mesurments
	ifstream InputFile("../../../../AdventOfCode2/input.txt");
	// horizontal position can not be negative
	uint32_t HorizontalPos = 0;
	// depth can be negative
	int32_t Depth = 0;

	// A command that we read from input file;
	string ReadCommand;
	// An argument for the said command that follows after the command
	string ReadArgument;

	// Reading commands and its argument, commands and arguments are separated by whitespaces, 1 command per line
	for (; getline(InputFile, ReadCommand, ' '), getline(InputFile, ReadArgument);)
	{
		if (ReadCommand == "forward")
			HorizontalPos += stoul(ReadArgument);
		else if (ReadCommand == "up")
			Depth -= stoi(ReadArgument);
		else
			Depth += stoi(ReadArgument);
	}

	cout << "Horizontal position: " << HorizontalPos << endl;
	cout << "Depth: " << Depth << endl;
	cout << "Product of both: " << Depth * (int64_t)HorizontalPos << endl;
	*/


	// SECOND HALF

	// File from wich we read mesurments
	ifstream InputFile("../../../../AdventOfCode2/input.txt");
	// horizontal position can not be negative
	uint32_t HorizontalPos = 0;
	// depth can be negative
	int32_t Depth = 0;
	int32_t Aim = 0;

	// A command that we read from input file;
	string ReadCommand;
	// An argument for the said command that follows after the command
	string ReadArgument;

	// Reading commands and its argument, commands and arguments are separated by whitespaces, 1 command per line
	for (; getline(InputFile, ReadCommand, ' '), getline(InputFile, ReadArgument);)
	{
		if (ReadCommand == "forward")
		{
			HorizontalPos += stoul(ReadArgument);
			Depth += Aim * stoul(ReadArgument);
		}
		else if (ReadCommand == "up")
			Aim -= stoi(ReadArgument);
		else
			Aim += stoi(ReadArgument);
	}

	cout << "Horizontal position: " << HorizontalPos << endl;
	cout << "Depth: " << Depth << endl;
	cout << "Product of both: " << Depth * (int64_t)HorizontalPos << endl;

	return 0;
}
