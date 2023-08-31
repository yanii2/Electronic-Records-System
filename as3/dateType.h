
#ifndef dateType_H
#define dateType_H
   
class dateType
{
public:
    void setDate(int month, int day, int year);
      //Function to set the date.
      //The member variables dMonth, dDay, and dYear are set  
      //according to the parameters.
      
    int getDay() const;
      //Function to return the day.

    int getMonth() const;
      //Function to return the month.  

    int getYear() const;
      //Function to return the year.     

    void printDate() const;
      //Function to output the date in the form mm-dd-yyyy.

    dateType(int month = 1, int day = 1, int year = 1910);
      //Constructor to set the date
      //The member variables dMonth, dDay, and dYear are set 
      //according to the parameters.
private:
    int dMonth; //variable to store the month
    int dDay;   //variable to store the day
    int dYear;  //variable to store the year
};

#endif
