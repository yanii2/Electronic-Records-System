/* Name: Yana Kuzmina, NSHE: 5007104058, CS202 1005, AS3
 * Description: using classes to construct patient file
 * Input: doctor name, specialty, patient
 * Output: roomrent total charges
 */
#include <string>
#include <iostream>
#include "doctorType.h"
 
using namespace std;

void doctorType::print()const{
    //need to get name first and last
    //from personType
    cout << "Dr.";
    personType::print();
    cout << "; ";
    cout << "Specialty: ";
    cout << specialty;
}


void doctorType::setSpecialty(string spl){
    specialty = spl;
   //Function to set specialty according to the parameters. 
   
}

string doctorType::getSpecialty() const{
    return specialty;
   //Function to return the specialty.
}


doctorType::doctorType(string first, string last, string spl) 
: personType(first, last), specialty(spl){
    if(specialty == ""){
        cout << "Specialty is missing for Dr."
                        << first;
                        cout << endl;
    }
    //if statement
    //is checking for 
    //correct specialty'
    //includes if statement
    
    // parameterized constructor
   //Sets firstName, lastName and specialty according to the parameters
}

