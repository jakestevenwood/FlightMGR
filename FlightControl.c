/** @brief Flight Control Functions
*   @file FlightControl.c
*/

//Includes
#include "FlightControl.h"

// Function Definitions
/** @brief Flight Menu
 *  @version 9MAR2021
 *  @author Jakob Wood
 *  @param void
 *  @return void
*/
void menu()
{
    system ("pause");
    system ("cls");
    printf("Humber Airlines Ltd.\n\n");
    printf("Please select one of the following options from the menu:\n");
    printf("1. Add Flight\n");
    printf("2. Add Customer\n");
    printf("3. View Flights\n");
    printf("4. View Customers\n");
    printf("5. Delete Customer\n");
    printf("6. Delete Flight\n");
    printf("7. Quit\n");
    scanf("%d", &option);

    if (option<0 || option>7)
{
        printf("Please Enter a Valid Selection: \n");
        menu();
}
}
/** @brief Add Flights
 *  @version 9MAR2021
 *  @author Jakob Wood
 *  @param void
 *  @return void
*/
void AddFlight()
{
    system ("pause");
    system ("cls");
    printf("---------------ADD FLIGHT---------------\n\n");
    printf("Please enter the flight number: ");
    scanf("%d", &flightNum[currentFlight]);
    printf("Please enter the maximum number of seats: ");
    scanf("%d", &maxSeats[currentFlight]);
    fflush(stdin);
    printf("Please enter the departure location: ");
    gets(departure[currentFlight]);
    printf("Please enter the destination: ");
    gets(destination[currentFlight]);
    numRowsF[currentFlight]=(currentFlight+1);
    currentFlight++;
    menu();
}
/** @brief Add Customers
 *  @version 9MAR2021
 *  @author Jakob Wood
 *  @param void
 *  @return void
*/
void AddCustomer()
{
    system ("pause");
    system ("cls");
    printf("---------------ADD CUSTOMER---------------\n\n");
    printf("Please enter the customer's first name: ");
    fflush(stdin);
    gets(firstName[currentCustomer]);
    printf("Please enter the customer's last name: ");
    fflush(stdin);
    gets(lastName[currentCustomer]);
    printf("Please enter the customer's phone number: ");
    fflush(stdin);
    gets(phoneNum[currentCustomer]);
    numRowsC[currentCustomer]=(currentCustomer+1);
    currentCustomer++;
    menu();
}
/** @brief View List of Flights
 *  @version 9MAR2021
 *  @author Jakob Wood
 *  @param void
 *  @return void
*/
void ViewFlights()
{
    system ("pause");
    system ("cls");
    printf("---------------FLIGHT LIST--------------- \n\n");
    for (int i=0;i<currentFlight;i++)
{
        printf("%d. Flight %d from %s travelling to %s \n", numRowsF[i], flightNum[i], departure[i], destination[i]);
}
        menu();
}
/** @brief View List of Customers
 *  @version 9MAR2021
 *  @author Jakob Wood
 *  @param void
 *  @return void
*/
void ViewCustomers()
{
    system ("pause");
    system ("cls");
    printf("---------------CUSTOMER LIST--------------- \n\n");
    printf("Number:\t\tName:\t\t\tPhone:\n");
    for (int i=0;i<currentCustomer;i++)
{
        printf("%d. \t\t%s %s \t\t%s \n", numRowsC[i], firstName[i], lastName[i], phoneNum[i]);
}
        menu();
}
/** @brief Delete Customer from List
 *  @version 9MAR2021
 *  @author Jakob Wood
 *  @param void
 *  @return void
*/
void DeleteCustomer()
{
    system ("pause");
    system ("cls");
    printf("---------------DELETE CUSTOMER--------------- \n\n");
    printf("Number:\t\tName:\t\t\tPhone:\n");
    for (int i=0;i<currentCustomer;i++)
{
        printf("%d. \t\t%s %s \t\t%s \n", numRowsC[i], firstName[i], lastName[i], phoneNum[i]);
}
    printf("\n\nEnter the Customer Number to Delete or 0 to Cancel:\n");
    scanf("%d", &delC);
    if(delC<0 || delC>currentCustomer)
{
        printf("Sorry! Please Enter a Valid Customer Number or 0 to Cancel:\n\n");
        DeleteCustomer();
}
    else if(delC==0)
{
        menu();
}
    else
{
        for (int i=delC-1;i<currentCustomer-1;i++)
{
            for(int j=0;j<MAX_CHAR;j++)
{
                firstName[i][j]=firstName[i+1][j];
                lastName[i][j]=lastName[i+1][j];
                phoneNum[i][j]=phoneNum[i+1][j];
}
}
    currentCustomer--;
    printf("Customer Deleted Successfully!\n\n");
}
    menu();
}
/** @brief Delete Flight from List
 *  @version 9MAR2021
 *  @author Jakob Wood
 *  @param void
 *  @return void
*/
void DeleteFlight()
{
    system ("pause");
    system ("cls");
    printf("---------------DELETE FLIGHT--------------- \n\n");
    for (int i=0;i<currentFlight;i++)
{
        printf("%d. Flight %d from %s  travelling to %s \n", numRowsF[i], flightNum[i], departure[i], destination[i]);
}
    printf("\n\nEnter the Flight Entry to Delete or 0 to Cancel:\n");
    scanf("%d", &delF);
    if(delF<0 || delF>currentFlight)
{
        printf("Sorry! Please Enter a Valid Flight Entry or 0 to Cancel:\n\n");
        DeleteFlight();
}
    else if(delF==0)
{
        menu();
}
{
        for (int i=delF-1;i<currentFlight-1;i++)
{
            for(int j=0;j<MAX_CHAR;j++)
{
                flightNum[i]=flightNum[i+1];
                departure[i][j]=departure[i+1][j];
                destination[i][j]=destination[i+1][j];
}
}
    currentFlight--;
    printf("Flight Deleted Successfully!\n\n");
}
    menu();
}

