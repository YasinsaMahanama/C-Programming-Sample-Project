//part 1


#include <stdio.h>
#include <stdbool.h>

// (a)Define the VehicleType enumerator
enum VehicleType
{
    CAR,
    MOTORBIKE,
    TRUCK//part 1


#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

// (a)Define the VehicleType enumerator
enum VehicleType
{
    CAR,
    MOTORBIKE,
    TRUCK
};

// (b)Define the Car structure
struct Car
{
    int Doors;
    char fuel[20];
};

// Define the Motorbike structure
struct Motorbike
{
    bool Gear;
};

// Define the Truck structure
struct Truck
{
    float Capacity; // in tonnes
    int num_Axles;
};


// Define the Vehicle structure
struct Vehicle
{
    enum VehicleType type;
    union
    {
        struct Car car;
        struct Motorbike motorbike;
        struct Truck truck;
    };
};

// (c) Function to input and print vehicle details
void vehicle_details(struct Vehicle* vehicle)
{
    switch (vehicle->type)
    {
        case CAR:
            printf("\n\nCar Details....\n\n");
            printf("\tNumber of Doors: %d\n", vehicle->car.Doors);
            printf("\tFuel Type: %s\n", vehicle->car.fuel);
            break;

        case MOTORBIKE:
            printf("\n\nMotorbike Details:\n\n");
            printf("\tHas Gears: %s\n", vehicle->motorbike.Gear ? "Yes" : "No");
            break;

        case TRUCK:
            printf("\n\nTruck Details:\n\n");
            printf("\tCargo Capacity: %.2f tonnes\n", vehicle->truck.Capacity);
            printf("\tNumber of Axles: %d\n", vehicle->truck.num_Axles);
            break;

        default:
            printf("Invalid Vehicle Type....\n");
    }
}


int main()
{
    struct Vehicle vehicle;

    // Input vehicle type

    printf("Enter vehicle type (0 for CAR, 1 for MOTORBIKE, 2 for TRUCK) : ");
    scanf("%d", &vehicle.type);

    // Input vehicle details based on type

    switch (vehicle.type)
    {
        case CAR:
            printf("\n\nEnter number of doors: ");
            scanf("%d", &vehicle.car.Doors);
            printf("\nEnter fuel type(petrol/diesel): ");
            scanf(" %[^\n]", vehicle.car.fuel);
            break;
        case MOTORBIKE:
            printf("\n\nDoes the motorbike have gears (1 for Yes, 0 for No): ");
            scanf("%d", &vehicle.motorbike.Gear);
            break;
        case TRUCK:
            printf("\n\nEnter cargo capacity (in tonnes): ");
            scanf("%f", &vehicle.truck.Capacity);
            printf("\nEnter number of axles: ");
            scanf("%d", &vehicle.truck.num_Axles);
            break;
        default:
            printf("\nInvalid Vehicle Type\n");
        return 1;
    }

    // Print vehicle details

    vehicle_details(&vehicle);
    getch();
    return 0;
}

};

// (b)Define the Car structure
struct Car
{
    int numberOfDoors;
    char fuelType[20];
};

// Define the Motorbike structure
struct Motorbike
{
    bool hasGear;
};

// Define the Truck structure
struct Truck
{
    float cargoCapacity; // in tonnes
    int numberOfAxles;
};

// Define the Vehicle structure
struct Vehicle
{
    enum VehicleType type;
    union
    {
        struct Car car;
        struct Motorbike motorbike;
        struct Truck truck;
    };
};

// (c) Function to input and print vehicle details
void inputAndPrintVehicleDetails(struct Vehicle *vehicle)
{
switch (vehicle->type)
{
    case CAR:
        printf("Car Details:\n");
        printf("Number of Doors: %d\n", vehicle->car.numberOfDoors);
        printf("Fuel Type: %s\n", vehicle->car.fuelType);
        break;
    case MOTORBIKE:
        printf("Motorbike Details:\n");
        printf("Has Gears: %s\n", vehicle->motorbike.hasGear ? "Yes" : "No");
        break;
    case TRUCK:
        printf("Truck Details:\n");
        printf("Cargo Capacity: %.2f tonnes\n", vehicle->truck.cargoCapacity);
        printf("Number of Axles: %d\n", vehicle->truck.numberOfAxles);
        break;
    default:
        printf("Invalid Vehicle Type\n");
}
}

int main()
{
    struct Vehicle vehicle;

    // Input vehicle type
    printf("Enter vehicle type (0 for CAR, 1 for MOTORBIKE, 2 for TRUCK): ");
    scanf("%d", &vehicle.type);

    // Input vehicle details based on type
    switch (vehicle.type)
    {
        case CAR:
            printf("Enter number of doors: ");
            scanf("%d", &vehicle.car.numberOfDoors);
            printf("Enter fuel type(petrol/diesel): ");
            scanf(" %[^\n]", vehicle.car.fuelType);
            break;
        case MOTORBIKE:
            printf("Does the motorbike have gears (1 for Yes, 0 for No): ");
            scanf("%d", &vehicle.motorbike.hasGear);
            break;
        case TRUCK:
            printf("Enter cargo capacity (in tonnes): ");
            scanf("%f", &vehicle.truck.cargoCapacity);
            printf("Enter number of axles: ");
            scanf("%d", &vehicle.truck.numberOfAxles);
            break;
        default:
            printf("Invalid Vehicle Type\n");
        return 1;
    }

    // Print vehicle details
    inputAndPrintVehicleDetails(&vehicle);

    return 0;
}
