#ifndef doctorType_H
#define doctorType_H

#include <string>
#include "personType.h"
 
using namespace std;

class doctorType: public personType
{
public:
   void print() const;
   //Function to output the doctor's first name, last name and specialty
   
   void setSpecialty(string spl);
   //Function to set specialty according to the parameters. 
   
   string getSpecialty() const;
   //Function to return the specialty.

   doctorType(string first = "", string last = "", string spl = "");
   // parameterized constructor
   //Sets firstName, lastName and specialty according to the parameters

private:
   string specialty; //variable to store the doctor's specialty
};

#endif
