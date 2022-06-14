#include <stdio.h>

#include "ColorCoding.h"
#include "NumberToPairValidation.h"

//Display the reference manual for wiring personnel
void DisplayAllPairColorCode(void)
{
	char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
	int pairNumber;

	printf("\n25 pair color code with PairNumber, MajorColor & MinorColor\n");
	//Get the color for each pair number and print
	for (pairNumber = 1; pairNumber <= MAX_PAIR_NUMBER; pairNumber++)
	{
		ColorPair colorPair = GetColorFromPairNumber(pairNumber);
		ColorPairToString(&colorPair, colorPairNames);
		printf("%d %s\n", pairNumber, colorPairNames);
	}
}