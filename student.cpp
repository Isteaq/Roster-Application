#include <iostream>
#include "student.h"
#include <cstring>
using namespace std;



//Constructor 
Student::Student(string ID, string fName, string lName,string eAddress, int studAge,int numofDays[],DegreeProgram progDegree) {                            //Default Constructor
    
    
    SetstudentID(ID);
    SetfirstName(fName);
    SetlastName(lName);
    SetemailAddress(eAddress);
    Setage(studAge);
    SetnumDays(numofDays);
    SetDegreeProgram(progDegree);
    

    
    
    return;
}





//Setter functions

void Student::SetstudentID(string ID) {
    studentID = ID;
    return;

}

void Student::SetfirstName(string fName) {
    firstName = fName;
    return;
}

void Student::SetlastName(string lName) {
    lastName = lName;
    return;
}

void Student::SetemailAddress(string eAddress) {
    emailAddress = eAddress;
    return;
}

void Student::Setage(int studAge) {
    age = studAge;
    return;
}

void Student::SetnumDays(int numOfDays[]) {

    for (int i = 0; i < 3; ++i) 
        
        numDays[i] = numOfDays[i];   

    return;
}

void Student::SetDegreeProgram(DegreeProgram degreeChoice) {
    progDegree = degreeChoice; 
    return;

}



//Getter Functions

string Student::GetstudentID() {
    return studentID;

}

string Student::GetfirstName() {
    return firstName;

}

string Student::GetlastName() {
    return lastName;

}

string Student::GetemailAddress()  {
    return emailAddress;

}

int Student::Getage()  {
    return age;

}

int* Student::GetnumDays() {
    return numDays;

}

DegreeProgram Student::GetdegreeProgram() {
    return progDegree;
}


void Student::print() {                                                  //print function to print specific student data

    cout << "Student ID: " << studentID << "\t" << " First Name: " << firstName << "\t" << " Last Name: " << lastName << "\t" << " Age " << age << "\t" << " Days in Course ";
 

    for (int i = 0; i < 3; ++i) {

        cout << numDays[i] << " ";
    }


    //to print degree program - use if statements
    if (progDegree == DegreeProgram::NETWORK) {
        cout << " Degree: NETWORK ";
    }

    else if (progDegree == DegreeProgram::SECURITY) {
        cout << " Degree: SECURITY ";
    }

    else if (progDegree == DegreeProgram::SOFTWARE) {
        cout << " Degree: SOFTWARE ";



    }

    cout << endl; 

}







    
    

   
