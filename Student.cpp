#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int id, char pname[]) {
  studentId = id;
  strcpy(name, pname);
}

// Display StudentId and Name
void Student::display() {
  cout<<"Student Id: " << studentId;
  cout<<endl;
  cout<<"Student name: " << name;
  
}

