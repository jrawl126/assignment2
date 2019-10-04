//
// Created by John Rawley on 10/3/19.
//

#include "TurboProp.h"
#include <cstdlib>
#include <ctime>
#include <cmath>
Turboprop::TurboProp() {
    grossWeight = 2200; // IN LBS
    setBrand("Custom");
    setModel("VTx");
}

TurboProp::TurboProp(string brand, string model, string fuelType, int grossWeight) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setGrossWeight(grossWeight);
}

TurboProp::~TurboProp() = default;

int TurboProp::getGrossWeight() {
    return grossWeight;
}

void TurboProp::setGrossWeight(int number) {
    if(number >0){
      grossWeight = number;
    }
    else
      grossWeight = 2200;
}

double TurboProp::mileageEstimate(double time) {
    srand(time(NULL));
    int temp = (rand() % 41) + 30;
    double mileage = temp * (pow(grossWeight,2)/(grossWeight-time));
    return mileage;
}

string TurboProp::toString() {
    return "-> TurboProp\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
           getEngineSize();
}
