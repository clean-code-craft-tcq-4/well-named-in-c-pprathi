#include <stdio.h>
#include <assert.h>

#include "ColorCoding.h"
#include "PairToNumberValidation.h"

/**********************************************************************************************
 * Global variables
 *********************************************************************************************/
extern int numberOfMinorColors;

//Function to test the color pair to pair number & print to console
void ValidatePairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber)
{
    ColorPair colorPair;

    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);

    assert(pairNumber == expectedPairNumber);
}

//Function to derive the pair number from color pair
int GetPairNumberFromColor(const ColorPair* colorPair)
{
    int pairNumber;
    pairNumber = colorPair->majorColor * numberOfMinorColors + colorPair->minorColor + 1;

    return pairNumber;
}
