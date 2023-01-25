/* Name: Yana Kuzmina, NSHE: 5007104058, CS202 1005, AS3
 * Description: using classes to construct patient file
 * Input: doctor name, specialty, patient
 * Output: roomrent total charges
 */

//two composition types
//error check for month. must be between 1 and 12 months
//year cannot be less than 1910 or greater than 2022
//id must be six characters
//first one needs to be uppercase letter of alphabet
//rest five will be digits

#include <string>
#include <iostream>
#include "personType.h"
 
using namespace std;

void personType::print() const{
    cout << firstName << " " << lastName;
     //Function to output the first name and last name
   //in the form firstName lastName.
}

void personType::setName(string first, string last){
    firstName = first;
    lastName = last;
    //Function to set firstName and lastName according 
   //to the parameters.
}

string personType::getFirstName() const{
    return firstName;
    //Function to return the first name.
}

string personType::getLastName() const{
    return lastName;
    //Function to return the last name.
}

personType::personType(string first, string last) 
: firstName(first), lastName(last){
    // firstName = first;
    // lastName = last;

}
