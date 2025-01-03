#ifndef PERSON_H
#define PERSON_H
//-----------------------------------------------------------
// Purpose: Header file for the Person class.
//          This class is designed to store five pieces of 
//          information describing a famous person.  
// Author:  Williams
//-----------------------------------------------------------
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Person
{
public:
   // Constructor methods
   Person();
   Person(const Person & person);
   ~Person();

   // Get methods 
   string getFirst_name(); 
   string getLast_name();
   int getBirthday();
   int getDeath_date();
   string getInfo();

   // Set methods 
   void setFirst_name(string FirstNm); 
   void setLast_name(string LastNm);
   void setBirthday(int BDate);
   void setDeath_date(int DeathDate);
   void setInfo(string Inf);
   
   // Other methods
   void Print();
   void Read();

private:
   // Object attributes
   string first_name; 
   string last_name;
   int birthday;
   int death_date;
   string info;
};
#endif
