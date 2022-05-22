/** @brief Flights Main Functions
 * @file Flights.c
 * */

#include "FlightControl.h"

int main()
{
    printf("Jakob Wood\tN01410616\tHUMBER COLLEGE\n");
    menu();

    do
{
        if (option == 1)
{
            AddFlight();
}
        else if (option == 2)
{
            AddCustomer();
}
        else if (option == 3)
{
            ViewFlights();
}
        else if (option == 4)
{
            ViewCustomers();
}
        else if (option == 5)
{
            DeleteCustomer();
}
        else if (option == 6)
{
            DeleteFlight();
}
}
    while (option != 7);

    return 0;
}
