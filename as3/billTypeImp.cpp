#include <string>
#include <iostream>
#include <iomanip>
#include "billType.h"
#include "personType.h"


using namespace std;

void billType::printBill(){
    if(pType.checkPatientID(ID) == false || pType.getID() != ID){
        cout << "ID mismatch or "
        << "Invalid ID is passed; ID from BillType: "
        << ID << endl;
        }
    else{
    pType.print();
    cout << "Billing Charges for ID: " << fixed 
    << setprecision(2) << ID << endl;
    cout << "Pharmacy Charges: $" 
    << pharmacyCharges << endl;
    cout << "Room Charges:     $"
    << roomRent << endl;
    cout << "Doctor's Fees:    $"
    << setw(4) << doctorFee << endl;
    cout << "______________________________ \n";
    cout << "Total Charges:    $" << setw(5) << 
    pharmacyCharges + roomRent + doctorFee << endl;
    cout << endl;
    cout << "***************************************"
    << "**************************\n";
    }
    //Function to output the first name and last name using pType obj
   //Function to output Billing details like ID, pharmacyCharges,
   //roomRent, doctorFee and finally total charges
}

void billType::setInfo(string id, double phCharges, double rRent,
                double docFee){
                    ID = id;
                    pharmacyCharges = phCharges;
                    roomRent = rRent;
                    doctorFee = docFee;
                    if(pType.getID() == ""){
                        pType.setID(id);
                         }
    //Function to setInfo of a bill
   //The member variables ID, pharmacyCharges, roomRent, doctorFee,
   //are set according to the parameters. 
                }

void billType::setID(string id){
    ID = id;
    //Function to setID according to the parameter
}

string billType::getID(){
    return ID;
    //Function to return the ID.
}

double billType::billingAmount(){
    return pharmacyCharges + roomRent + doctorFee;
     //Function to return pharmacyCharges + roomRent + doctorFee
}

billType::billType(string id, double phCharges, double rRent,
      double docFee, patientType patientObj):pType(patientObj){
          ID =id;
          pharmacyCharges = phCharges;
          roomRent = rRent;
          doctorFee = docFee;
          if(pType.getID() == ""){
              pType.setID(id);
          }
    //Parameterized Constructor
   //The member variables ID, pharmacyCharges, roomRent, doctorFee,
   //are set according to the parameters.
   //Also set pType with patientObj

      }

billType::billType(){
    // Default Constructor
   //The member variables ID, pharmacyCharges, roomRent, doctorFee,
   //have to be initialized; no need to initialize pType here
}

// private:
//    string ID;
//    double pharmacyCharges; //variable to store the pharmacy charges
//    double roomRent; //variable to store the room rent
//    double doctorFee; //variable to store the doctor fee
//    patientType pType; // composition; With pType object you can access
//                         //patientType functions



