//Road.cpp

#include <iostream>
#include "Road.h"

using namespace std;
//constructor
Road::Road()
{
	name = "N/A";
	
	numberOfLanes = 0;

	maxSpeedLimit = 0;
}
//constructor with parameters
Road::Road(string rname,int lanes,int speed)
{
	name = rname;

	if(lanes > 0)
	numberOfLanes = lanes;
	else
	cout << "Lanes cannot be less than 0" << endl;

	if(speed > 0 && speed < 100)
	maxSpeedLimit = speed;
	else
	cout << "Speed cannot be less than 0 or more than 100" << endl;
}

// return name of road
string Road::getName()
{
	return name;
}
//return number of lanes
int Road::getLanes()
{
	return numberOfLanes;
}
//return speed
int Road::getMaxSpeedLimit()
{
	return maxSpeedLimit;
}
//set name
void Road::setName(string rname)
{
	name = rname;
}
//set lanes
void Road::setLanes(int lanes)
{

	while(lanes <= 0)
	{
		cout << "Lanes must be greater than 0" << endl;
		cout << "Retry" << endl;
		cin >> lanes;
	}
	if(lanes > 0)
	numberOfLanes = lanes;
}
//set speed
void Road::setSpeedLimit(int speed)
{
	while(speed <= 0 || speed >= 100)
	{
		cout << "Speed must be greater than 0 or less than 100" << endl;
		cout << "Retry" << endl;
		cin >> speed;
	}
	if(speed > 0 && speed < 100)
	maxSpeedLimit = speed;

}
//display road info
void Road::displayInfo()
{
	cout << getName() << " has " << getLanes() << " lanes, and a max permissible speed of "
	<< maxSpeedLimit << endl;	
}

