//
// Created by John Rawley on 10/3/19.
//

#include "Skateboard.h"
#include <ctime>
#include <cstdlib>


Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
    srand(time(NULL));
    double temp = ((rand()% 4001)+ 1000)/10000;
    double mileage = temp * time;
    if(time > 25 && temp < 250){
      temp = (rand()%(time/3)+1)
      mileage += temp;
    }
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}
