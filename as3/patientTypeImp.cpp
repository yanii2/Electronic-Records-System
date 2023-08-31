

#include <string>
#include <iostream>
#include "patientType.h"

using namespace std;

    void patientType::print() const{
    //Function to output the first name and last name of patient
    //Function to output doctors first name, last name, and specialty
    //using doctorType object(attendingPhysicain)
    cout << "**********************************"
    << "**************************"
    << "*****\n";
    cout << "Patient: ";
    personType::print();
    cout << endl;
    cout << "Patient ID: " << ID << endl;
    cout << "Attending Physician: ";
    attendingPhysicain.print();
    cout << endl;
    cout << "__________________________________"
    << "________________\n";
    cout << endl;
    
    //attendingPhysicain.print();
    //persontype print utilize func from base class in extended class

    }

    void patientType::setInfo(string id, string fName, string lName,
                int bDay, int bMth, int bYear,
                string docFrName, string docLaName, 
                string docSpl){
    //Function to setInfo of a patient
    //The patient details like ID, first name, last name, 
    //birthday(dd,mm,yr); doctor details like first name, last name, 
    //specialty are set according to the parameters passed. 
    
    personType::setName(fName,lName);
    ID = id;
    checkPatientID(id);
    dateOfBirth.setDate(bDay, bMth, bYear);
    attendingPhysicain.setName(docFrName, docLaName);
    attendingPhysicain.setSpecialty(docSpl);
    //do name first then id, then doc name and specialty and then date
    }
    
    void patientType::setID(string id){
    //Function to set the ID according to the parameter.
    ID = id;
    }

    string patientType::getID() const{
    //Function to return the ID 
    return ID;
    }

    void patientType::setBirthDate(int bDay, int bMth, int bYear){
    //Function to set the birthDate.
    //bDay, bMth, bYear are set according to the parameters.
    //if none given they are set to the above default values
    dateOfBirth.setDate(bDay, bMth, bYear);
    // if(bMth < 1 || bMth > 12){
    //     cout << "Error: Invalid month entry for ";
    //     personType::getFirstName();
    //     cout << endl;
    // if(bYear < 1910 || bYear > 2022){
    //     cout << "Error: Invalid year entry for ";
    //     personType::getFirstName();
    //     cout << endl;
    // }
        
    // }
    if(bYear < 1910 || bYear > 2022){
        cout << "Error: Invalid year entry for "
        << personType::getFirstName();
        cout << endl;
        }

    }
    int patientType::getBirthYear() const{
    //Function to return the year
    return dateOfBirth.getYear();
    }

    void patientType::setDoctorName(string fName, string lName){
    //Function to set the doctor's first name and last name
    //according to the parameters.
    attendingPhysicain.setName(fName, lName);
    }

    void patientType::setDoctorSpl(string spl){
    //Function to set the doctor's specialty according to the parameter
    attendingPhysicain.setSpecialty(spl);
    
    }

    string patientType::getDoctorFName() const{
    //Function to return doctor's first name.
    return attendingPhysicain.getFirstName();
    
    }

    patientType::patientType(string id, string fName, string lName,
                int bDay, int bMth, int bYear,
                string docFrName, string docLaName, string docSpl)
                // : personType(fName, lName)
                 : attendingPhysicain(docFrName, docLaName, docSpl)
                {
                    setInfo(id, fName, lName, bDay, bMth,
                    bYear, docFrName, docLaName, docSpl);
                    if(bMth < 1 || bMth > 12){
                        cout << "Error: Invalid month entry for "
                        << fName;
                        cout << endl;
                    }
                    if(bYear < 1910 || bYear > 2022){
                        cout << "Error: Invalid year entry for "
                        << fName;
                        cout << endl;
                    }
                    
                    if(checkPatientID(id) == false){
                        cout << "Error: " << id 
                        << " is invalid patientID for "
                        << fName;
                        cout << endl;
                    }
                     if(docSpl == ""){
                        cout << "Doctor Specialty"
                        << " is missing for patient "
                        << fName << endl;
                    }
    //Parameterized Constructor
    //The patient details like ID, first name, last name, 
    //birthday(dd,mm,yr); doctor details like first name, last name, 
    //specialty are set according to the parameters passed. 
    }
    
    bool patientType::checkPatientID(string patientIDTmp) const{
    //Function to check patientID; It has totally 6 characters;
    //First character is upper case alphabet; Characters from 2 to 6
    //can be digits from 0 to 9; 
    //Failing to fulfill above conditions should return false else true
    if(patientIDTmp.length() != 6 ){
        return false;
    
    }else if(!isalpha(patientIDTmp[0])){
        return false;
    
    }else if(islower(patientIDTmp[0])){
        return false;

    }else if(!isdigit(patientIDTmp[1])|| 
    !isdigit(patientIDTmp[2])||!isdigit(patientIDTmp[3])||
    !isdigit(patientIDTmp[4])||
    !isdigit(patientIDTmp[5])){
        return false;
        
    }
    
    return true;
    }

//  private:
//     string ID; //variable to store the ID
//     dateType dateOfBirth; //composition; With dateOfBirth object you 
//                           //can access dateType functions
//     doctorType attendingPhysicain; //composition;  With dateOfBirth 
//                             //object you can access dateType functions
