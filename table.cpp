//-----------------------------------------------------------
// Purpose: File for implementing the table class
// Author:  Williams 
//-----------------------------------------------------------
#include "table.h"

//-----------------------------------------------------------
// Constructor method 
//-----------------------------------------------------------
Table::Table()
{
    //cout << "Constructor\n";
    count = 0;
}

//-----------------------------------------------------------
// Copy constructor method 
//-----------------------------------------------------------
Table::Table(const Table & table)
{
    //cout << "Copy constructor\n";
    count = 0;
}

//-----------------------------------------------------------
// Destructor method 
//-----------------------------------------------------------
Table::~Table()
{
    //cout << "Destructor\n";
    count = 0;
}

//-----------------------------------------------------------
// Print method for printing records as a nice table
//-----------------------------------------------------------
void Table::print()
{
   string first_name, last_name, info;
   int birthday, death_date;
   
    cout << " " << first_name << " " << last_name << "     " << birthday << " - "
    << death_date << "   " << info << endl;
    cout << endl;
}

//-----------------------------------------------------------
// Read method for reading information from people.txt
//-----------------------------------------------------------
void Table::read()
{
   // Open input file
   ifstream din;
   din.open("people.txt");
   if (din.fail()) 
     {
        cout << "Could not open people.txt\n";
     }

   string str;
   
   // Loop for reading people record 
   while (!din.eof())
    {
      Person input;
      din >> str;
      input.setFirst_name(str);
      din >> str;
      input.setLast_name(str);
      din >> str;
      input.setBirthday(stoi(str));
      din >> str;
      input.setDeath_date(stoi(str));
      getline(din, str);
      input.setInfo(str);
      input.Print();
      people[count++] = input;
    }
  din.close();
}

void Table::search_first_name()
{
    //Prompt user for typing the desired info 
    cout << "Enter the person's first name: \n";
    string search;
    cin >> search;
    
    //Searching books array for matchiing data
    for (int i = 0; i < count; i++)
    {
        if (search == people[i].getFirst_name()) 
        {
        cout << endl;
        people[i].Print();
        } 
    }
}

void Table::search_last_name()
{
    //Prompt user for typing the desired info 
    cout << "Enter the person's last name: \n";
    string search;
    cin >> search;
    
    //Searching books array for matchiing data
    for (int i = 0; i < count; i++)
    {
        if (search == people[i].getLast_name())
        {
           cout << endl;
           people[i].Print();
        } 
    }
}

void Table::search_year()
{
    cout << "Enter the person's birth year:\n";
    string search;
    cin >> search;
    
    //Searching books array for matchiing data
    for (int i = 0; i < count; i++)
    {
        if (stoi(search) == people[i].getBirthday())
        {
        cout << endl;
        people[i].Print();
        }
    }
}
