#include <string>

using namespace std;

class Vehicle
{
public:
    virtual string getType() = 0;
};

class Car : public Vehicle
{
public:
    string getType() override
    {
        return "Car";
    }
};

class Bike : public Vehicle
{
public:
    string getType() override
    {
        return "Bike";
    }
};

class Truck : public Vehicle
{
public:
    string getType() override
    {
        return "Truck";
    }
};