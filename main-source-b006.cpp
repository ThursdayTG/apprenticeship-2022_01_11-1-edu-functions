                                                                                                                             // inclusion of libraries
	#include <iostream>

// inclusion of files
	#include "main-header-b001.hpp"



// prototyping
void	subRoutine1();
void	subRoutine2(int, int);
int		subRoutine3(int, int, int);
int		subRoutine3(int, int);
// Überladen heißt, dass mehrere Funktionen mit dem gleichen Namen hinterlegt sind. Der Compiler ist aber schlau genug die Funktionen anhand der Übergabeparameter zu unterscheiden. Er kann sowohl Anzahl als auch Typ unterscheiden.

/*
 * a "function prototype" or "function interface" declares a function, but omits the function body.
 * this makes functions & subroutines usable in "main()" functions without worsening the readability of the file.
 *
 * in function prototyping, the following things are declared:
 *	- type signature (e.g. void, int)
 *	- name (e.g. subRoutine1, subRoutine2, etc in this case)
 *
 * there can be many transfer parameters for functions, but only one return value.
 */


int		subRoutine4(int);



/*	main function	*/

int main() {

	/**/
	using	std::cout;
	using	std::cin;
	/**/

	/*	local variable declaration	*/
	bool	restartOperator;
		// used to determine whether do-while loop should be repeated manually
	/*	local variable declaration	*/


	do {

		cout	<< "\n";

		/*	local variable declaration	*/
		int		a = 38;
		int		b = 4;

		int		number;
		/*	local variable declaration	*/

		/*	primary execution block	*/
		subRoutine1();

		subRoutine2(a, b);

		cout	<< " sum sR3 sum = "
				<< subRoutine3(12, 17, 3)
				<< " \n";

		cout	<< " sum sR3 dif = "
				<< subRoutine3(12, 17)
				<< " \n";

		cout	<< " \n"
				<< " - - - - -"
				<< " \n\n"
				<< " put in a number for subRoutine4: ";
		cin		>> number;
		subRoutine4(number);
		/*	primary execution block	*/

		/*	end block	*/
		restartOperator = queryRestart();	// asks user whether current section of program should be looped
		cls();								// clears screen
		/*	end block	*/

	}	while (restartOperator == true);

	return 0;

}

// "Einfachtsfunktion"
void subRoutine1() {
	std::cout	<< " Hello World!"
				<< " \n";
}

// function with parameters
void subRoutine2(int x, int y) {
	std::cout	<< " sum sR2 = "
				<< x + y
				<< " \n";

	/*
	 * variables have to be redeclared,
	 * because "int a" & "int b" do not exist outside of the scope of "main()" function.
	 * values (in this case 38 and 4) can be transferred here, variables can not.
	 */
}

// function with parameters and return values
int subRoutine3(int x, int y, int z) {
	int		sum = x + y + z;
	return sum;
}

// overloading functions
int subRoutine3(int x, int y) {
	int		difference = x - y;
	return difference;
}

// recursive functions
int subRoutine4(int i) {
	i--;
	std::cout	<< " " << i
				<< " \n";

	if (i > 0)
		return subRoutine4(i);
	else
		return 0;
}



/*	using C++ compiler from GCC via console

	compile for debug:
g++ -Og main-source-b006.cpp -o main-newest.debug

	clear and compile as final executable:
clear && g++ -O3 main-source-b006.cpp -o main-newest.release

	clear console, compile debug executable, compile release executable, and run program:
g++ -Og main-source-b006.cpp -o main-newest.debug && g++ -O3 main-source-b006.cpp -o main-newest.release && clear && ./main-newest.release

   g++ -Og main-source-b006.cpp -o main-newest.debug
&& g++ -O3 main-source-b006.cpp -o main-newest.release
&& clear
&& ./main.release
*/
