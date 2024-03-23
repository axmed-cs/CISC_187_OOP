/******************************************************************************

Ahmed Abdullahi

Chapter 13 programming assignment - Classes (Object-Oriented Programming)

October 2023

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include "Inventory.h"
using namespace std;


// Global constants
const int MAX_DOGS = 5;

// main
int main()
{
    // local variables to get user input and calculate total price for current jobs
    int counter = 0;
    float inputNumber = 0.0;
    string inputString;
    float totalPrice = 0.0;
    
    // Inventory object initialization with default contructor
    Inventory list[MAX_DOGS];
                      
    // while loop
    char option = 0;
  while (option != 3)
  {
    //Display menu
    cout <<  endl << endl << "********************************" << endl;
    cout << "You Dirty Dog - Business Menu" << endl;
    cout << "********************************" << endl;
    cout << "1.  Enter a new job" << endl;
    cout << "2.  List all current jobs" << endl;
    cout << "3.  Exit" << endl << endl;
    
    //input option
    cout << "Please choose an option from the numbers above or enter 3 to exit: ";
    cin >> option;
    cout << endl << endl;
    
    // switch case from user option
    switch(option)
    {
    case '1': 
        // case 1 will retrieve dog data
       
       // check if there are 5 dog jobs
        if (counter >= 5){
            cout << "Job list full." << endl;
            cout << "Currently have 5 dog customers." << endl;
            
            break;
       }
       
        //*********************************************
        // Dog License
        //*********************************************
        cout << "Enter Dog License Number: " << endl;
        cin.ignore();
        getline(cin, inputString);
        
        //Validate user input
        while (inputString.length() >= 10) {
            cout << "Error, Invalid License number" << endl;
            cout << "Please enter a valid Dog License number:  "<< endl;
            cin >> inputString;
        }
        list[counter].setDogLicense(inputString);
        inputString = "";
        
        //*********************************************
        // Dog Name
        //*********************************************
        cout << "Enter Dog Name: " << endl;
        //cin >> inputString;
        //cin.ignore();
        getline(cin, inputString);
        
        
        //Validate user input
        while (inputString.length() >= 15) {
            cout << endl << "Error, dog name too long" << endl;
            cout << "Please enter a valid dog name less than 15 characters:  " << endl;
            cin >> inputString;
        }
        // set Data
        list[counter].setDogName(inputString);
        inputString = "";
        
        //*********************************************
        // Owner Phone Number
        //*********************************************
        cout << "Enter Owner Phone Number: " << endl;
        getline(cin, inputString);
        
        //Validate user input
        while (inputString.length() >= 11) {
            cout << "Error, Invalid phone number" << endl;
            cout << "Please enter a valid phone number:  "<< endl;
            cin >> inputString;
        }
        // set Data
        list[counter].setOwnerPhone(inputString); 
        inputString = "";
        
        //*********************************************
        // Price Quoted
        //*********************************************
        cout << "Enter Price Quoted (Without $): " << endl;
        cin >> inputNumber;
        
        //Validate user input so it has no characters
        while (cin.fail()){
            cin.clear();
            cin.ignore();
            
            cout << "Error..." << endl;
            cout << "Please enter a number without any characters." << endl;
            cin >> inputNumber;
        }
        cin.ignore();
        
        //Validate user input so price is not negative
        while (inputNumber < 0) {
            cout << "Error... Invalid price number" << endl;
            cout << "Please enter a valid price number greater than 0.00 (Without $ sign):  "<< endl;
            cin >> inputNumber;
        }
        // set Data
        list[counter].setPriceQuoted(inputNumber);
        inputNumber = 0.00;
        
        //confirmation for data recieved
        cout << endl<< "Thank you, we will take good care of " << list[counter].getDogName() << "!" << endl;
        counter++;
        
        break;
    
    case '2':    
            // case 2 will display all dog jobs
            cout << "Diplaying all dog jobs... " << endl;
            cout << "Current jobs: " << counter << endl << endl;
            for (int i = 0; i < MAX_DOGS; i++){
                if (!list[i].getDogLicense().empty())
                     {
                         cout << "Dog license: " << list[i].getDogLicense() << endl;
                         cout << "Dog name: " << list[i].getDogName() << endl;
                         cout << "Owner Phone: " << list[i].getOwnerPhone() << endl;
                         cout << "Price Quoted: $" << fixed << setprecision(2) << list[i].getPriceQuoted() << endl;
                         cout << "******" << endl << endl;
                         
                         totalPrice += list[i].getPriceQuoted();
                     }
            }
            cout << "The total price is $" << fixed << setprecision(2) << totalPrice << endl;
            totalPrice = 0.0;
           
        break;
           
    case '3':
        // case 3 will close program
        cout << "Thank you, we hope you use our business again." << endl;
        exit(0);
       
        break;
       
    default:  
    
        // validation for menu option
        cout << "That is not a valid menu option." << endl;
        
        break;
    
    }//end switch
 
    
  }//end the while loop
 
    return 0;
}//end main


