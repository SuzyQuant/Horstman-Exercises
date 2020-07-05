/*	WRITE A PROGRAM THAT PROMPTS THE USER FOR A MEASUREMENT IN METERS
*	AND THEN CONVERTS IT TO MILES, FEET, AND INCHES.
*	1 meter = 0.000621371 mile
*	1 meter = 3.28084 feet
*	1 meter = 39.3701 inch
*/

#include<iostream>		// STANDARD I/O HEADERS
#include<iomanip>		// STANDARD I/O HEADERS

using namespace std;

const double mileVal = 0.000621371;
const double feetVal = 3.28084;
const double inchVal = 39.3701;

int main() {				// DECLARE MAIN
	double inMeters, inMiles, inFeet, inInches;	// DOUBLE-PRECISION VARIABLES
	cout << "Enter a measurement in meters:  " << endl;	// REQUEST INPUT
	cin >> inMeters;	// READ FROM STANDARD INPUT

	inMiles = inMeters * 0.000621371;	// CONVERT TO MILES
	inFeet = inMeters * 3.28084;		// CONVERT TO FEET
	inInches = inMeters * 39.3701;		// CONVERT TO INCHES

	// OUTPUT
	cout << inMeters << " meters is " << inMiles << " in miles." << endl;
	cout << inMeters << " meters is " << inFeet << " in feet." << endl;
	cout << inMeters << " meters is " << inInches << " in inches." << endl;
}							// END MAIN