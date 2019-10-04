//
// Created by John Rawley on 10/4/19.
//

#ifndef DRIVINGSIMULATOR_TURBOPROP_H
#define DRIVINGSIMULATOR_TURBOPROP_H

#include "PoweredVehicle.h"

class TurboProp : public PoweredVehicle {

private:
    int grossWeight;

public:
    TurboProp();

    explicit TurboProp(string brand, string model, string fuelType,
                 int grossWeight);

    virtual ~TurboProp();
    int getGrossWeight();
    void setGrossWeight(int grossWeight);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_TURBOPROP_H
