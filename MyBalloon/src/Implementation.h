/*
 * Implementation.h
 *
 *  Created on: Jan 11, 2017
 *      Author: aaron
 */

#ifndef IMPLEMENTATION_H_
#define IMPLEMENTATION_H_

#include <string>
#include <iostream>

class Balloon
{
	private:
		std::string color;
		double radius;
		double altitude;
	public:
		/*
		Balloon( std::string c = "red", double r = 1, double a = 0 ){
			color = c;
			radius = r;
			altitude = a;
		}
		*/
		Balloon(std::string color = "red", double r = 1, double a = 0);
		void ascend(double feet);
		void descend(double feet);
		void pop( );
		void state();
		double getRadius();
		double getAltitude();
		std::string getColor();
		void setRadius(double r);
		void setAltitutude(double a);
		void setColor(std::string c);
};




#endif /* IMPLEMENTATION_H_ */
