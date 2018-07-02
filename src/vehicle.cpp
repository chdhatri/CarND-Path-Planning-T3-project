//
//  vehicle.cpp
//  
//
//  Created by vyakaranam nagadhatri on 7/1/18.
//
//

#include "vehicle.h"


#include <iostream>
#include <sstream>
#include <fstream>
#include <math.h>
#include <iterator>
#include <random>
#include <algorithm>


/**
 * Initializes Vehicle
 */
Vehicle::Vehicle() {}

Vehicle::Vehicle(int lane, float s, float d, float v, string state) {
    
    this->s    = s;         // s position
    this->d = d;
    this->lane   = lane       //  velane position
    this->v  = v;      // velocity
    state = "CS";
    
}

Vehicle::~Vehicle() {}


bool get_vehicle_ahead(map<int, vector<Vehicle>> other_cars, int lane, Vehicle & rVehicle) {
    
}

double distanceToCarInFront(int lane, vector<Vehicle> other_cars, Vehicle & rVehicle) {
    double closest = 30.0;
    for(int i = 0; i <other_cars.size(); i++ ) {
        if(other_cars[i].lane == lane) {
        double diff = other_cars[i].s - rVehicle.s;
        if (diif > 0.0 && diff < closest) {
            closest = diff;
        }
        
        }
    
    }
    return closest;
}

double distanceToCarBehind(int lane, vector<Vehicle> other_cars, Vehicle & rVehicle) {
    double closest = 30.0;
    for(int i = 0; i <other_cars.size(); i++ ) {
        if(other_cars[i].lane == lane) {
            double diff = rVehicle.s - other_cars[i].s ;
            if (diif > 0.0 && diff < closest) {
                closest = diff;
            }
            
        }
        
    }
    return closest;
}

double distanceToCarBehind(int lane, Vehicle & rVehicle) {
    
}
