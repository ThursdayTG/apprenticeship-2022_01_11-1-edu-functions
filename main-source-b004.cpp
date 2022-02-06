                                                                                                                             // inclusion of libraries
	#include <iostream>

// inclusion of files
	#include "main-header-b001.hpp"



// prototyping
void	subRoutine1();
void	subRoutine2(int, int);
int		subRoutine3(int, int, int);

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
		/*	local variable declaration	*/

		/*	primary execution block	*/
		subRoutine1();

		subRoutine2(a, b);

		cout	<< " sum sR3 sum = "
				<< subRoutine3(12, 17, 3)
				<< " \n";
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



/*	using C++ compiler from GCC via console

	compile for debug:
g++ -Og main-source-b004.cpp -o main-newest.debug

	clear and compile as final executable:
clear && g++ -O3 main-source-b004.cpp -o main-newest.release

	clear console, compile debug executable, compile release executable, and run program:
g++ -Og main-source-b004.cpp -o main-newest.debug && g++ -O3 main-source-b004.cpp -o main-newest.release && clear && ./main-newest.release

   g++ -Og main-source-b004.cpp -o main-newest.debug
&& g++ -O3 main-source-b004.cpp -o main-newest.release
&& clear
&& ./main.release
*/