//TollRoad.h
#ifndef TOLLROAD_H
#define TOLLROAD_H
#include <iostream>
#include "Road.h" // includes definition of class Road
#include <string>
using namespace std;

class TollRoad : public Road{
	public:
		TollRoad();	
		//constructor with four parameters
		TollRoad(string,int,int,double);
		//return toll
		double getToll();

		void setToll(double);

		void displayInfo()override;



	private:

		double tollAmount;

};

#endif
