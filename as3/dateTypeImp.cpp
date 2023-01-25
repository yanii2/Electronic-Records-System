/* Name: Yana Kuzmina, NSHE: 5007104058, CS202 1005, AS3
 * Description: using classes to construct patient file
 * Input: doctor name, specialty, patient
 * Output: roomrent total charges
 */

#include <string>
#include <iostream>
#include "dateType.h"

using namespace std;

    void dateType::setDate(int month, int day, int year){
      //Function to set the date.
      //The member variables dMonth, dDay, and dYear are set  
      //according to the parameters.
      dMonth = month;
      dDay = day;
      dYear = year;
    }
      
    int dateType::getDay() const{
        return dDay;
        //Function to return the day.
    }

    int dateType::getMonth() const{
      //Function to return the month.  
      return dMonth;
    }

    int dateType::getYear() const{
      //Function to return the year.  
      return dYear;
    }   

    void dateType::printDate() const{
      //Function to output the date in the form mm-dd-yyyy.
      std:: cout << dMonth << "-" << dDay << "-" << dYear;
    }

    dateType::dateType(int month, int day, int year) 
    : dMonth(month), dDay(day), dYear(year) {
      //constructor must have same name as class
      //Constructor to set the date
      //The member variables dMonth, dDay, and dYear are set 
      //according to the parameters.
    //   dMonth = month;
    //   dDay = day;
    //   dYear = year;
    }