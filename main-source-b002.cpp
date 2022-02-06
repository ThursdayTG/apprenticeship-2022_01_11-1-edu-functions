                                                                                                                                  // inclusion of libraries
	#include <iostream>

// inclusion of files
	#include "main-header-b001.hpp"



void subRoutine1() {
	cout	<< " test 1 ..."
			<< " \n";
}

/*
 * this is technically doable, but not optimal.
 * this can result in a bloated main file,
 * and pushes the "main()" function unnecessarily downwards,
 * worsening the readability of the main file.
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


	cout	<< "\n";

	do {

		/*	local variable declaration	*/
			//lorem_ipsum
		/*	local variable declaration	*/

		/*	primary execution block	*
		cout	<< " test 1 ..."
				<< " \n";

		cout	<< " test 2 ...";
		cout	<< " \n";
		/*	primary execution block	*/

		/*	primary execution block	*/
		subRoutine1();
		/*	primary execution block	*/

		/*	end block	*/
		restartOperator = queryRestart();	// asks user whether current section of program should be looped
		cls();								// clears screen
		/*	end block	*/

	}	while (restartOperator == true);

	return 0;

}

/*	using C++ compiler from GCC via console

	compile for debug:
g++ -Og main-source-b002.cpp -o main-newest.debug

	clear and compile as final executable:
clear && g++ -O3 main-source-b002.cpp -o main-newest.release

	clear console, compile debug executable, compile release executable, and run program:
g++ -Og main-source-b002.cpp -o main-newest.debug && g++ -O3 main-source-b002.cpp -o main-newest.release && clear && ./main-newest.release

   g++ -Og main-source-b002.cpp -o main-newest.debug
&& g++ -O3 main-source-b002.cpp -o main-newest.release
&& clear
&& ./main.release
*/
