/*
 * Implementation.cpp
 *
 *  Created on: Jan 11, 2017
 *      Author: aaron
 */

#include "implementation.h"
#include <iostream>
#include <string>


//Balloon::Balloon( std::string c="red", double r=1.0, double a=0.0 )
//{ color = c; radius = r; altitude = a;
//}
/*
Balloon::Balloon( std::string c = "red", double r = 1, double a = 0 ){
	color = c;
	radius = r;
	altitude = a;
}
*/
Balloon::Balloon(std::string c, double r, double a){
	color = c;
	radius = r;
	altitude = a;
}

void Balloon::ascend( double feet ){
	altitude += feet;
}
void Balloon::descend( double feet ){
	altitude -= feet;
}
void Balloon::pop( ){
	radius = 0.0;
	altitude = 0.0;
}
void Balloon::state(){
	std::cout << " color: " << color << std::endl;
	std::cout << " radius: " << radius << std::endl;
	std::cout << "altitude: " << altitude << std::endl;
}
double Balloon::getRadius(){
	return(radius);
}
double Balloon::getAltitude(){
	return(altitude);
}
std::string Balloon::getColor(){
	return(color);
}
void Balloon::setRadius(double r){
	if (r > 0){
		radius = r;
	}
}
void Balloon::setAltitutude(double a){
	altitude = a;
}
void Balloon::setColor(std::string c){
	color = c;
}

