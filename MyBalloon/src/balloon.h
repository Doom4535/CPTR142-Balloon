/*
 * balloon.h
 *
 *  Created on: Jan 11, 2017
 *      Author: aaron.covrig
 */

#ifndef BALLOON_H_
#define BALLOON_H_

class Balloon
{
	private:
		std::string color;
		double radius;
		double altitude;
	public:
		Balloon( std::string c="red", double r=1.0, double a=0.0 )
		{ color = c; radius = r; altitude = a;
		}
		void ascend( double feet ){
			altitude += feet;
		}
		void descend( double feet ){
			altitude -= feet;
		}
		void pop( ){
			radius = 0.0;
			altitude = 0.0;
		}
		void state(){
			std::cout << " color: " << color << std::endl;
			std::cout << " radius: " << radius << std::endl;
			std::cout << "altitude: " << altitude << std::endl;
		}
		double getRadius(){
			return(radius);
		}
		double getAltitude(){
			return(altitude);
		}
		std::string getColor(){
			return(color);
		}
		void setRadius(double r){
			if (r > 0){
				radius = r;
			}
		}
		void setAltitutude(double a){
			altitude = a;
		}
		void setColor(std::string c){
			color = c;
		}
};



#endif /* BALLOON_H_ */
