//TollRoad.cpp
#include<iostream>
#include"TollRoad.h"

using namespace std;

//constructor
TollRoad::TollRoad(){}
//constructor with parameters
TollRoad::TollRoad(string rname,int lanes,int speed,double toll):Road(rname,lanes,speed)
{
	if(toll > 0.0)
		tollAmount = toll;
	else
	cout << "Toll amount must be greater than 0" << endl;
}

//return toll amount
double TollRoad::getToll()
{
	return tollAmount;
}

//set toll
void TollRoad::setToll(double toll)
{
	while(toll <= 0)
	{
		cout << "Toll amount must be greater than 0" << endl;
		cout << "Retry" << endl;
		cin >> toll;
	}
	if(toll > 0.0)
	tollAmount = toll;

}

void TollRoad::displayInfo()
{	
	Road::displayInfo();
	cout << "The toll on " << Road::getName() << " is $" << getToll() << endl;
}
