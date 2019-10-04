//
// Created by John Rawley on 10/3/19.
//

#include "Jet.h"
#include <cstdlib>
#include <ctime>

Jet::Jet() {
    numberOfEngines = 1;
    setBrand("Custom");
    setModel("VTx");
}

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int number) {
    if(number >= 0 ){
      numberOfEngines = number;
    }
    else
      numberOfEngines = 1;
}

double Jet::mileageEstimate(double time1) {
    srand(time(NULL));
    int temp = (rand() % 61) + 40;
    double mileage = temp;
    if (fuelType == "Rocket" && numberOfEngines > 2) {
        mileage += mileage * 0.055;
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n"+PoweredVehicle::toString()+"\n\tNumber of Engines: "+
    to_string(getNumberOfEngines());
}
