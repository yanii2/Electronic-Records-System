
#ifndef personType_H
#define personType_H

#include <string>
 
using namespace std; 

class personType
{
public:
   void print() const;
   //Function to output the first name and last name
   //in the form firstName lastName.
  
   void setName(string first, string last);
   //Function to set firstName and lastName according 
   //to the parameters.

   string getFirstName() const;
   //Function to return the first name.
      
   string getLastName() const;
   //Function to return the last name.
       
   personType(string first = "", string last = "");
   // parameterized constructor
   //Sets firstName and lastName according to the parameters.
   //The default values of the parameters are empty strings.
       
 private:
   string firstName; //variable to store the first name
   string lastName;  //variable to store the last name
};

#endif
