/** @brief Flight Control Constants, Function Prototypes
*   @file Flight Control.h
*/

#ifndef FLIGHTCONTROL_H
#define FLIGHTCONTROL_H

// Includes
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

//Constants
#define MAX_ROWS 100
#define MAX_FLIGHTS 100
#define MAX_SEATS 300
#define MAX_ENTRIES 3000
#define MAX_CHAR 100

// Variables
int option;
int currentFlight;
int currentCustomer;
int delC;
int delF;
int numRowsC[MAX_ROWS];
int numRowsF[MAX_ROWS];
int flightNum[MAX_FLIGHTS];
int maxSeats[MAX_SEATS];
char departure[MAX_ENTRIES][MAX_CHAR];
char destination[MAX_ENTRIES][MAX_CHAR];
char firstName[MAX_ENTRIES][MAX_CHAR];
char lastName[MAX_ENTRIES][MAX_CHAR];
char phoneNum[MAX_ENTRIES][MAX_CHAR];

// Function Prototypes
///@cond INTERNAL
void menu();
void AddFlight();
void AddCustomer();
void ViewFlights();
void ViewCustomers();
void DeleteCustomer();
void DeleteFlight();
///@endcond

#endif
