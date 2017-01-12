/*
 * Driver.cpp
 *
 *  Created on: Jan 11, 2017
 *      Author: aaron
 */

#include "implementation.h"
#include <iostream>
#include <string>

int main(){
	//Balloon B, C, D;
	Balloon B("red", 1, 0);
	Balloon C("blue", 2, 0);
	Balloon D("orange", 1, 15);
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
	C.setColor("blue");
	D.setAltitutude(8934.3);
	C.state();
	D.state();

	return 0;
}


