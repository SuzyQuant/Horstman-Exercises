/*	WRITE A PROGRAM THAT ASKS THE USER FOR THE LENGTHS OF THE SIDES OF A RECTANGLE.
*	THEN PRINT
*	THE AREA AND PERIMETER OF THE RECTANGLE
*	THE LENGTH OF THE DIAGONAL (USE THE PYTHAGOREAN THEOREM)
*/

#include<iostream>		// STANDARD I/O HEADERS
#include<iomanip>		// STANDARD I/O HEADERS

using namespace std;

double sideLong, sideShort, area, perimeter, diagonalLength;

int main() {
	cout << "Enter the longest length of the rectangle:" << endl;
	cin >> sideLong;

	cout << "Enter the shortest length of the rectangle:" << endl;
	cin >> sideShort;

	area = sideLong * sideShort;
	perimeter = 2 * sideShort + 2 * sideLong;
	diagonalLength = sqrt(sideShort * sideShort + sideLong * sideLong);

	cout << "area = " << area << endl;
	cout << "perimeter = " << perimeter << endl;
	cout << "diagonalLength = " << diagonalLength << endl;

	return 0;
}