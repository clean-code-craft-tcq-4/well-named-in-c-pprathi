#include <stdio.h>
#include <assert.h>

#include "ColorCoding.h"
#include "NumberToPairValidation.h"

/**********************************************************************************************
 * Global variables
 *********************************************************************************************/
extern const char* MajorColorNames[];
extern const char* MinorColorNames[];
extern int numberOfMinorColors;

//Function to test the number to color pair
void ValidateNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor)
{
	char colorPairNames[MAX_COLORPAIR_NAME_CHARS];

	ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);

    //verify the color with the expected colors
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

//Function to derive the Color from the PairNumber
ColorPair GetColorFromPairNumber(int pairNumber)
{
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;

    colorPair.majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);

    return colorPair;
}

//Function to format the color as a string
void ColorPairToString(const ColorPair* colorPair, char* buffer)
{
    sprintf(buffer, "%s %s", MajorColorNames[colorPair->majorColor],
    						 MinorColorNames[colorPair->minorColor]);
}
