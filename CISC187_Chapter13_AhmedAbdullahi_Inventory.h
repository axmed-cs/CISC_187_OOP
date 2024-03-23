/******************************************************************************

Ahmed Abdullahi

Chapter 13 programming assignment - Classes (Object-Oriented Programming)

October 2023

This is the specification for the Inventory Class

*******************************************************************************/
#ifndef INVENTORY_H
#define INVENTORY_H


class Inventory
{
private:
    //Private member variables
    std::string dogLicense;
    std::string dogName;
    std::string ownerPhone;
    float priceQuoted;
    
public:
    //Default constructor
    Inventory();
    
    //Mutator functions
    void setDogLicense(std::string);
    void setDogName(std::string);
    void setOwnerPhone(std::string);
    void setPriceQuoted(float);
    
    //Accessor functions
    std::string getDogLicense();
    std::string getDogName();
    std::string getOwnerPhone();
    float getPriceQuoted();
    
};

#endif