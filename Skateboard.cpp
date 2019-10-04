//
// Created by John Rawley on 10/3/19.
//

#include "Skateboard.h"
#include <ctime>
#include <cstdlib>
#include <cmath>


Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time1) {
    srand(time(NULL));
    double temp = ((rand()% 4001)+ 1000)/10000;
    double mileage = temp * time1;
    if(time1 > 25 && time1 < 250){
      int mod = floor(time1/3)+1;
      temp = rand()%mod;
      mileage += temp;
    }
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}
