#ifndef STUDENT_H
#define STUDENT_H
#include <cstring>
#include "degree.h"
using namespace std;

class Student {                                       //Student class

public:

    Student(string ID, string fName, string lName, string eAddress, int studAge, int numofDays[], DegreeProgram progDegree);
  

    void SetstudentID(string ID);                    //Mutator
    void SetfirstName(string fName);                 //Mutator
    void SetlastName(string lName);                  //Mutator
    void SetemailAddress(string eAddress);           //Mutator
    void Setage(int studAge);                        //Mutator
    void SetnumDays(int numOfDays[]);                 //Mutator
    void SetDegreeProgram(DegreeProgram degreeChoice); //Mutator 
    void print();

    string GetstudentID();                           //Accessor
    string GetfirstName();                           //Accessor
    string GetlastName();                           //Accessor
    string GetemailAddress();                       //Accessor
    int Getage();                                   //Accessor
    int* GetnumDays();                              //Accessor
    DegreeProgram GetdegreeProgram();              //Accessor

   

private:

    string studentID;                            
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int numDays[3];
    DegreeProgram progDegree;



};

#endif // !STUDENT_H
