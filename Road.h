//Road.H
#ifndef ROADS_H
#define ROADS_H
#include <iostream>
#include <string>
//comment
using namespace std;

class Road{
	public: //constructor
		Road();
		//constructor with parameters
		Road(string,int,int);
		//return name of road
		string getName();
		//return number of lanes
		int getLanes();
		// return speed
		int getMaxSpeedLimit();

		void setName(string);

		void setLanes(int);

		void setSpeedLimit(int);

		virtual void displayInfo();


	protected:

		int numberOfLanes,maxSpeedLimit;

		string name;
};
#endif
