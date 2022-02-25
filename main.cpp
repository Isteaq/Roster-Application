#include <iostream>
#include "student.h"
#include "roster.h"
#include <string>
#include <stdio.h>


//OBJECTIVE: TO MIGRATE EXISTING ROSTER SYSTEM TO A NEW PLATFORM USING C++. 
//The program will maintain a current roster of within a given course. 
//Data for the program include student ID, first name, last name, email address, age (continued on the next line)
//an array of the number of days to complete each course, and degree program. 
//This information can be found in the provided studentDatavariable . 
//The program will read a list of five students and use function calls to manipulate data.
//While parsing the list of data, the program should create student objects. 
//The entire student list will be stored in one array of students called classRosterArray.
//Specific data-related output will be directed to the console.



using namespace std;

int main() {

    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysInCourse1;
    int daysInCourse2;
    int daysInCourse3;
    DegreeProgram degreeprogram;
    



    const int NUM_VALS = 5;
    const string studentData[NUM_VALS] =

    { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
      "A2,Susan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
      "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
      "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
      "A5,Isteaq,Ahmed,iahme10@my.wgu.edu,31,30,50,40,SOFTWARE",
    };

    cout << "Scripting and Programming - Applications - C867" << endl;                                                //F.1 - Print out to the screen: course title, programming language, WGU Student ID and name.
    cout << "The programming language used is C++." << endl;
    cout << "My student id is: 000838708" << endl;
    cout << "My name is: Isteaq Ahmed" << endl;
    cout << endl;

    Roster classRoster;                                                                  //creates a object to class Roster  
    
    for(int i = 0; i < 5; i++ ) {                                                       //parse function takes the student data and creates student object which are then indexed into the classRosterArray

    classRoster.parse(studentData[i]);

    }

    classRoster.printAll();

    cout << endl;

    classRoster.printInvalidEmails();                                                   //prints Invalid Emails that do not contain . or @

    cout << endl;
    
    for (int j = 0; j < 5; j++) {       

   classRoster.printAverageDaysInCourse(classRoster.studentID(j));                      //takes the average of the 3 days in the course
   
   cout << endl;


    }

    cout << endl;

    classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);                          //prints the Student Data by the selected degree program

    cout << endl; 

    classRoster.remove("A3");                                                           //removes a student from the roster

    cout << endl;

    classRoster.printAll(); 

    cout << endl;

    classRoster.remove("A3");                                                            //outputs an error message due to the student no longer existing




    
    
} 
