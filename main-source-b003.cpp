                                                                                                                                  // inclusion of libraries
	#include <iostream>

// inclusion of files
	#include "main-header-b001.hpp"



// prototyping
void subRoutine1();
void subRoutine2(int, int); // only the type of the used variables goes here, not variable names



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


	cout	<< "\n";

	do {

		/*	local variable declaration	*/
		int		a = 38;
		int		b = 4;
		/*	local variable declaration	*/

		/*	primary execution block	*
		cout	<< " test 1 ..."
				<< " \n";

		cout	<< " test 2 ...";
		cout	<< " \n";
		/*	primary execution block	*/

		/*	primary execution block	*/
		subRoutine1();

		subRoutine2(a, b);
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
	std::cout	<< " test 1 ..."
				<< " \n";
}

// "Funktion mit Übergabewerten"
void subRoutine2(int x, int y) {
	std::cout	<< " sum = "
				<< x + y
				<< " \n";

	/*
	 * variables have to be redeclared,
	 * because "int a" & "int b" do not exist outside of the scope of "main()" function.
	 * values (in this case 38 and 4) can be transferred here, variables can not.
	 */
}



/*	using C++ compiler from GCC via console

	compile for debug:
g++ -Og main-source-b003.cpp -o main-newest.debug

	clear and compile as final executable:
clear && g++ -O3 main-source-b003.cpp -o main-newest.release

	clear console, compile debug executable, compile release executable, and run program:
g++ -Og main-source-b003.cpp -o main-newest.debug && g++ -O3 main-source-b003.cpp -o main-newest.release && clear && ./main-newest.release

   g++ -Og main-source-b003.cpp -o main-newest.debug
&& g++ -O3 main-source-b003.cpp -o main-newest.release
&& clear
&& ./main.release
*/
