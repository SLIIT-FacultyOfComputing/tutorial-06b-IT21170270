#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std ;

// Assign studentId and name
void Student::assignDetails(int id , const char Sname[]) {

  studentId = id ;
  strcpy(name , Sname);
}

// Display StudentId and Name
void Student::display() {
  cout << "StudentId = " << studentId <<endl ;
  cout << "name = " << name << endl ;
}
