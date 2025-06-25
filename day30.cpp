/* Day 30: Parking Lot System (OOPs + Inheritance + STL)

Design classes: Vehicle, ParkingLot. Park/unpark vehicles.
 
*Output Example:*
Car Parked: A1
Slot Freed: A1     */

#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
using namespace std;


// Base class: Vehicle (Abstract class with virtual type)
class Vehicle {
protected:
    string regNumber; // Registration number of vehicle

public:
    Vehicle(string regNum) : regNumber(regNum) {}

    virtual string getType() = 0; // Pure virtual function to get vehicle type

    string getRegNumber() {
        return regNumber;
    }

    virtual ~Vehicle() {} // Virtual destructor for safe deletion
};


// Derived class: Car (inherits from Vehicle)
class Car : public Vehicle {
public:
    Car(string regNum) : Vehicle(regNum) {}

    // Override to return the vehicle type
    string getType() override {
        return "Car";
    }
};

// Class: ParkingLot (Manages parking slots)
class ParkingLot {
private:
    set<string> freeSlots; // Sorted set of available slot IDs
    map<string, Vehicle*> parked; // Maps slot ID to parked vehicle

public:
    // Constructor: Initializes free slots
    ParkingLot(vector<string> slotIds) {
        for (string id : slotIds) {
            freeSlots.insert(id);
        }
    }

    // Function to park a vehicle
    bool park(Vehicle* v) {
        if (freeSlots.empty()) {
            cout << "No Free Slot Available\n";
            return false;
        }

        // Pick the first available slot (smallest lexicographically)
        string slot = *freeSlots.begin();
        freeSlots.erase(slot); // Remove from free slots
        parked[slot] = v;      // Map slot to vehicle

        // Print parking confirmation
        cout << v->getType() << " Parked: " << slot << endl;
        return true;
    }

    // Function to unpark (free) a slot
    bool unpark(string slotID) {
        if (parked.find(slotID) == parked.end()) {
            cout << "Slot Already Empty\n";
            return false;
        }

        // Delete vehicle object and free memory
        delete parked[slotID];

        // Remove from map and add slot back to freeSlots
        parked.erase(slotID);
        freeSlots.insert(slotID);

        // Print unpark confirmation
        cout << "Slot Freed: " << slotID << endl;
        return true;
    }

    // Destructor: Clean up any remaining parked vehicles
    ~ParkingLot() {
        for (auto& p : parked) {
            delete p.second;
        }
    }
};


int main() {
    // Create a parking lot with 3 slots
    vector<string> slots = {"A1", "A2", "B1"};
    ParkingLot lot(slots);

    // Create and park vehicles
    Vehicle* v1 = new Car("KA-01-AA-1234");
    Vehicle* v2 = new Car("KA-02-BB-5678");

    lot.park(v1);  // Output: Car Parked: A1
    lot.park(v2);  // Output: Car Parked: A2

    // Unpark a vehicle
    lot.unpark("A1"); // Output: Slot Freed: A1

    // Park another vehicle
    Vehicle* v3 = new Car("KA-03-CC-9999");
    lot.park(v3);     // Output: Car Parked: A1 (reused)

    return 0;
}
