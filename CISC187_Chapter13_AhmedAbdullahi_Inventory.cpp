/******************************************************************************

Ahmed Abdullahi

Chapter 13 programming assignment - Classes (Object-Oriented Programming)

October 2023

This is the Implementation file for the Inventory Class

*******************************************************************************/
#include <iostream>
#include <string>
#include "Inventory.h"
using namespace std;



/************************************
Inventory default contructor
************************************/
Inventory::Inventory()
{
    dogLicense = ""; 
    dogName = ""; 
    ownerPhone = ""; 
    priceQuoted = 0.0;

}

/************************************
setDogLicense member function (mutator)
************************************/
void Inventory::setDogLicense(string license)
{
    if (license.length() >= 10)
    {
        exit(EXIT_FAILURE);
    }
    else
    {
        dogLicense = license;
    }
}

/************************************
getDogLicense member function (accessor)
************************************/
std::string Inventory::getDogLicense()
{
    return dogLicense;
}

/************************************
setDogName member function (mutator)
************************************/
void Inventory::setDogName(string name)
{
    if (name.length() >= 15)
    {
        exit(EXIT_FAILURE);
    }
    else
    {
        dogName = name;
    }
}

/************************************
getDogName member function (accessor)
************************************/
std::string Inventory::getDogName()
{
    return dogName;
}

/************************************
setOwnerPhone member function (mutator)
************************************/
void Inventory::setOwnerPhone(string phone)
{
    if (phone.length() >= 11)
    {
        exit(EXIT_FAILURE);
    }
    else
    {
        ownerPhone = phone;
    }
}

/************************************
getOwnerPhone member function (accessor)
************************************/
std::string Inventory::getOwnerPhone()
{
    return ownerPhone;
}

/************************************
setPriceQuoted member function (mutator)
************************************/
void Inventory::setPriceQuoted(float price)
{
    if (price < 0)
    {
        exit(EXIT_FAILURE);
    }
    else
    {
        priceQuoted = price;
    }
}

/************************************
getOwnerPhone member function (accessor)
************************************/
float Inventory::getPriceQuoted()
{
    return priceQuoted;
}
