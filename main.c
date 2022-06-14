#include <stdio.h>

#include "ColorCoding.h"
#include "NumberToPairValidation.h"
#include "PairToNumberValidation.h"

/**********************************************************************************************
 * Global variables
 *********************************************************************************************/
const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);


int main()
{
    ValidateNumberToPair(4, WHITE, BROWN);
    ValidateNumberToPair(5, WHITE, SLATE);

    ValidatePairToNumber(BLACK, ORANGE, 12);
    ValidatePairToNumber(VIOLET, SLATE, 25);

    DisplayAllPairColorCode();

    return 0;
}
