#include "Vehicle.h"
#include "VehicleFactory.h"
#include <bits/stdc++.h>

using namespace std;

int main()
{
    VehicleFactory *carFactory = new CarFactory();
    VehicleFactory *truckFactory = new TruckFactory();
    VehicleFactory *bikeFactory = new BikeFactory();

    Vehicle *myCar = carFactory->createVehicle();
    Vehicle *myTruck = truckFactory->createVehicle();
    Vehicle *myBike = bikeFactory->createVehicle();
    string v = myCar->getType(); // "Car"
    cout << v << "\n";
    v = myTruck->getType(); // "Truck"
    cout << v << "\n";

    v = myBike->getType(); // "Bike"
    cout << v << "\n";

    return 0;
}