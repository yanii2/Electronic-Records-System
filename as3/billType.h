#ifndef BillType_H
#define BillType_H

#include <string>
#include "doctorType.h"
#include "personType.h"
#include "dateType.h"
#include "patientType.h"
 
using namespace std;

class billType 
{
public:
   void printBill();
   //Function to output the first name and last name using pType obj
   //Function to output Billing details like ID, pharmacyCharges,
   //roomRent, doctorFee and finally total charges

   void setInfo(string id, double phCharges, double rRent,
                double docFee);
   //Function to setInfo of a bill
   //The member variables ID, pharmacyCharges, roomRent, doctorFee,
   //are set according to the parameters. 
   
   void setID(string id);
   //Function to setID according to the parameter

   string getID();
   //Function to return the ID.
   
   double billingAmount();
   //Function to return pharmacyCharges + roomRent + doctorFee

   billType(string id, double phCharges, double rRent,
      double docFee, patientType patientObj);
   //Parameterized Constructor
   //The member variables ID, pharmacyCharges, roomRent, doctorFee,
   //are set according to the parameters.
   //Also set pType with patientObj

   billType(); 
   // Default Constructor
   //The member variables ID, pharmacyCharges, roomRent, doctorFee,
   //have to be initialized; no need to initialize pType here
 private:
   string ID;
   double pharmacyCharges; //variable to store the pharmacy charges
   double roomRent; //variable to store the room rent
   double doctorFee; //variable to store the doctor fee
   patientType pType; // composition; With pType object you can access
                        //patientType functions
};

#endif
