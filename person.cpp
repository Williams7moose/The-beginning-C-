//-----------------------------------------------------------
// Purpose: File for implementing the person class
// Author:  Williams 
//-----------------------------------------------------------
#include "person.h"

//-----------------------------------------------------------
// Constructor method 
//-----------------------------------------------------------
Person::Person()
{
   first_name = " "; 
   last_name = " ";
   birthday = 0;
   death_date = 0;
   info = " ";
}
//-----------------------------------------------------------
// Copy Constructor method 
//-----------------------------------------------------------
Person::Person(const Person & person)
{
   first_name = person.first_name; 
   last_name = person.last_name;
   birthday = person.birthday;
   death_date = person.death_date;
   info = person.info;
}
//-----------------------------------------------------------
// Destructor method 
//-----------------------------------------------------------
Person::~Person()
{
    
}
//-----------------------------------------------------------
// Get methods
//-----------------------------------------------------------
string Person::getFirst_name()
{
    return first_name;
}
string Person::getLast_name()
{
    return last_name;
}
int Person::getBirthday()
{
    return birthday;
}
int Person::getDeath_date()
{
    return death_date;
}
string Person::getInfo()
{
   return info;
}

//-----------------------------------------------------------
// Set methods 
//-----------------------------------------------------------
void Person::setFirst_name(string FirstNm)
{
    first_name = FirstNm;
}

void Person::setLast_name(string LastNm)
{
    last_name = LastNm;
}

void Person::setBirthday(int BDate)
{
    birthday = BDate;
}

void Person::setDeath_date(int DeathDate)
{
    death_date = DeathDate;
}

void Person::setInfo(string Inf)
{
    info = Inf;   
}

//-----------------------------------------------------------
//For printing Person's information
//-----------------------------------------------------------
void Person::Print()
{
    cout << " " << first_name << " " << last_name << "     " << birthday << " - "
    << death_date << "   " << info << endl;
    cout << endl;
}
