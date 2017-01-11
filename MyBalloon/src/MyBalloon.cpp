//============================================================================
// Name        : MyBalloon.cpp
// Author      : Aaron C.
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "balloon.h"

//using namespace std;


int main(){
	Balloon B;
	B.state();
	B.ascend( 10 );
	B.state();

	B.descend( 5 );
	B.state();

	B.pop();
	B.state();

	double current_radius = B.getRadius();
	std::cout << current_radius << std::endl;

	B.setRadius(2);
	current_radius = B.getRadius();
	std::cout << current_radius << std::endl;

return 0;
}
