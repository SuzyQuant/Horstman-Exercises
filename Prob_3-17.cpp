/*	MEAN AND STANDARD DEVIATION.
*	WRITE A PROGRAM THAT READS A SET OF FLOATING-POINT DATA VALUES FROM 
*	THE INPUT. WHEN THE END OF FILE IS REACHED, PRINT OUT THE COUNT OF 
*	THE VALUES, THE AVERAGE, AND THE STANDARD DEVIATION.
*/

#include<iostream>		// STANDARD I/O HEADERS
#include<iomanip>		// STANDARD I/O HEADERS
#include<cstdlib>

using namespace std;

const int n = 5;

float xAverage, sumAv = 0, sumSqrd = 0, sumSquared, stDev;
float xArr[n];
float xSqArr[n];

int main() {

	//	INITIALIZE THE ARRAY
	for (int i = 0; i < n; i++) {
		xArr[i] = 0;
	}

	cout << "Input " << n << " numbers " << endl;
	for (int j = 0; j < n; j++) {
		cin >> xArr[j];
	}

	// OUTPUT THE ARRAY OR COUNT OF THE VALUES
	// SAVES THE SUM OF THE ARRAY
	for (int k = 0; k < n; k++) {

		cout << xArr[k] << " " << endl;

		sumAv = sumAv + xArr[k];
		xSqArr[k] = xArr[k] * xArr[k];
		sumSqrd = sumSqrd + xSqArr[k];
	}

	// OUTPUT THE AVERAGE OF THE VALUES
	xAverage = sumAv / n;
	cout << "The average is " << xAverage << endl;

	// OUTPUT THE STANDARD DEVIATION OF THE VALUES
	sumSquared = sumAv * sumAv / n;
	stDev = sqrt((sumSqrd - sumSquared) / (n - 1));
	cout << "The standard deviation is " << stDev << endl;
}