#include <iostream> 	//object-oriented library, allows perform operation with input/output
// << : look for library/header in system path
#include "myMath.h" //"" : look for library/ header file in local/relative path
#include <array>	// to use CPP-style array

//The name of a variable means nothing to a computer
//The data type and the value matter
double y = 10.3;
int main()
{

	std::cout <<"Hello World"<< std::endl;
	//std standard
	// cout for output


	//when you use a = symbol it means you are assigining the RHS to LHS
	std::cout << add_one(10) << std::endl;

	int x = 11.5; //truncates
	//int x2{ 11.5 }; // {} is an initialized operator, this checks if the value matches the 
	//datatype...if not it gives Compilation Error
	double z = 6;
	double f = 0.1 + 0.2;	// not exactly 0.3

	// auto CAN automatically deduce the type of an object...not always right
	auto a = 1; //this will waste RAM if you just want a to be {0,1}
	auto b = 'c';
	auto c = 123.456;


	//Array - a set of variables with the same data type
	//In CPP, there are two types of array (C-style array, and CPP-style array)
	
	// C-style
	int aaa[3] = { 1,2,3 }; 
	double ddd[4] = { 1.1,1.2,3.45,6.0 };

	//CPP-style
	std::array <float, 2> ff = { 3.1,2.5 }; 
	for (int i = 0; i < ff.size(); i++)
	{
		std::cout << ff[i] << std::endl;

	}
	return 0;

}

//	1) Write a CMakeLists.txt
//	2) Create a few empty source/header files (can be added later)
//	3) Use CMake-GUI to generate Visual Studio environment from CMakeLists.txt
//	4) Build & Run my code from the Visual Studio
