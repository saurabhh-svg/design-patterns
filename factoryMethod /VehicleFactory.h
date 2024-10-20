#include "Vehicle.h"

// parent class to create a vehicle
class VehicleFactory
{
public:
    // abstract method that will be overridden by the sub classes
    virtual Vehicle *createVehicle() = 0;
};

// sub classes extending parent VehicleFactory
class CarFactory : public VehicleFactory
{
    Vehicle *createVehicle()
    {
        return new Car();
    }
};

class BikeFactory : public VehicleFactory
{
    Vehicle *createVehicle()
    {
        return new Bike();
    }
};

class TruckFactory : public VehicleFactory
{
    Vehicle *createVehicle()
    {
        return new Truck();
    }
};
