//
//  vehicle.h
//
//
//  Created by vyakaranam nagadhatri on 6/30/18.
//
//

#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <random>
#include <vector>
#include <map>
#include <string>

using namespace std;

class Vehicle {
public:
    int lane; // lane of the car
    
    float s;
    
    float d;
    
    float v; // speed of the car
    
    string state;
    
    bool get_vehicle_behind(map<int, vector<Vehicle>> other_cars, int lane, Vehicle & rVehicle);
    
    bool get_vehicle_ahead(map<int, vector<Vehicle>> other_cars, int lane, Vehicle & rVehicle);
    
    double distanceToCarInFront(int lane, Vehicle & rVehicle);
    
    double distanceToCarBehind(int lane, Vehicle & rVehicle);
    
    
};
#endif /* vehicle_h */
