// inclusion of libraries
#include <iostream>
#include <string>

// namespace
using namespace std;


int main(){

		//	Kopfgesteuerte Schleife (while-loop)
	/*	example 1	*
	int		i;
	i = 0;
	while	(i	< 10)		{
		cout	<< i << "\n";
		i		= i - 1;
	}
	/**/

	/*	example 2	*
	int		i;
	i = 0;
	while	(i	<= 27)		{
		cout	<< i << "\n";
		i		= i - 1;
	}
	/**/

	/*	example 3	*
	int		i;
	i = 5;
	while	(i	<= 27)		{
		cout	<< i << "\n";
		i		= i - 1;
	}
	/**/

	/*	example 4	*
	int		i;
	i = 111;
	while	(i	>= 44)		{
		cout	<< i << "\n";
		i		= i - 3;
	}
	/**/

//	/*	example 5	*/
//		// Nach Eingabe von Start und Endwert per cin soll einmal hoch und wieder zurückgezählt werden.
//
// 	/*	solution 3	*/
// 	int		beginLoop	= 1;
//
// 	double	startValueD	= 0,	endValueD	= 1;	// double variables are for input to prevent doubles from causing errors
// 	int		startValueI	= 0,	endValueI	= 1;	// startValue needs to be lower than endValue value to avoid error message from triggering on first run
// 	int		outputValue	= 0;
// 	/**/
//
// 	while	(beginLoop == 1){
//
// 		/**/
// 		cout	<<	"\033[2J\033[1;1H"		// clears screen, string of special characters that will translate to a clear screen command.
// 				<< "Task: count from startValue to endValue and back with while loops. \n";
// 		/**/
//
// 		/*	setting default values, largely to correct wrong inputs	*/
// 		beginLoop	= 0;
// 		startValueD	= 0.0;
// 		endValueD	= 0.0;
// 		startValueI	= 0;
// 		endValueI	= 0;
// 		/**/
//
// 		/*	user input	*/
// 		cout	<< "\n"
// 				<< "Startwert: \n";		cin		>> startValueD;
// 		cout	<< "Endwert: \n";		cin		>> endValueD;
// 		cout	<< "\n";
// 		/**/
//
// 		/**/
// 		startValueI	= startValueD;				// converting floats to integers prevents error on float input, decimal digits are fully negated
// 		endValueI	= endValueD;
//
// 		if	(	startValueI	>  2147483646		// 2147483646 scratches upper / lower limit of signed integers
// 			||	startValueI	< -2147483646
// 			||	endValueI	>  2147483646
// 			||	endValueI	< -2147483646)	{
// 			startValueI	= 1;					// setting startValueI above endValueI fires mechanisms that prevent incorrect number inputs
// 			endValueI	= 0;
// 		}
// 		if	(startValueI >= endValueI)		{
// 			cout	<< "invalide Eingabe.";
// 			cin.ignore();
// 			cin.get();
// 			beginLoop	= 1;
// 		}
//
// 		outputValue	= startValueI;
// 		/**/
//
// 		/*	outputs outputValue then increments until endValue is reached, then does the inverse function	*/
// 		while	(	outputValue	< endValueI
// 				&&	beginLoop	!= 0		){
// 			cout	<< outputValue
// 					<< "\n";
// 			outputValue++;
// 		}
// 		while	(	outputValue	< startValueI
// 				&&	beginLoop	!= 0		){
// 			cout	<< outputValue
// 					<< "\n";
// 			outputValue--;
// 		}
// 		/**/
//
// 	}



		//	Fußgesteuerte Schleife (do-while-loop)
		//	Besonderheit: wird mind. 1x durchlaufen
	/*	example 1	*
	char jn;

	do	{
		cout	<< "Schleife wiederholen <j/n>: ";
		cin		>> jn;
	}	while (jn == 'j' || jn == 'J');
	/**/


		//	Zählschleife (for-loop)
	/*	syntax	*
	for	(	variable to check;		// is only executed once. can be used to redefine a variable, too.
			condition;				// is always checked for
			instruction)		{	// is executed each time the loop is executed
		instruction;
	}
	/**/

	/*	example 1	*/
	int i = 1;
	for	(i;	i < 10;	i++){			// ++ operator increments variable, i.e. increases value by 1
		cout	<< i << "\n";
	}
	/**/

	/**/
	cin.ignore();						// use this block to pause progress in console, unpauses on pressing any button. cin.ignore(); may not always be necessary.
	cin.get();
	cout	<<	"\033[2J\033[1;1H";		// clears screen, string of special characters that will translate to a clear screen command.
	/**/

	return 0;

}

/*
	compile:
g++ loops_delta.cpp -o loops_delta

	run from console:
./loops_delta

	clear, compile, run:
clear && g++ loops_delta.cpp -o loops_delta && ./loops_delta

	name meaning:
C++ for Schmid
*/
