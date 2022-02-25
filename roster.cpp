#include <iostream>
#include <cstring>
#include <string>
#include "student.h"
#include "roster.h"

using namespace std;


 void Roster::parse(string dataString) {

	size_t rhs = dataString.find(","); 
	string rosterID = dataString.substr(0, rhs);

	size_t lhs = rhs + 1; 
	rhs = dataString.find(",", lhs);
	string rosterFirstName = dataString.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = dataString.find(",", lhs);
	string rosterLastName = dataString.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = dataString.find(",", lhs);
	string rosteremailAddress = dataString.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = dataString.find(",", lhs);
	int rosterAge = stoi(dataString.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = dataString.find(",", lhs);
	int rosterCourse1 = stoi(dataString.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = dataString.find(",", lhs);
	int rosterCourse2 = stoi(dataString.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = dataString.find(",", lhs);
	int rosterCourse3 = stoi(dataString.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = dataString.find(",", lhs);
	string programDegree = dataString.substr(lhs, rhs - lhs);

	DegreeProgram degree = DegreeProgram::NETWORK;

	if (programDegree == "NETWORK") {
		degree = DegreeProgram::NETWORK;
	}

	else if (programDegree == "SECURITY") {
		degree = DegreeProgram::SECURITY;
	}

	else if (programDegree == "SOFTWARE") {
		degree = DegreeProgram::SOFTWARE;
	}

	add(rosterID, rosterFirstName, rosterLastName, rosteremailAddress, rosterAge, rosterCourse1, rosterCourse2,rosterCourse3, degree);
	

}

 string Roster::studentID(int j) {
	 return classRosterArray[j]->GetstudentID();
 }


 void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {

	 int daysInCourseArray[] = { daysInCourse1,daysInCourse2, daysInCourse3 };

	 classRosterArray[arrayIndex++] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourseArray, degreeprogram);

 }


 Roster::~Roster() {

	 for (int i = 0; i < 5; ++i) {

		 if (classRosterArray[i] != nullptr) {

			 delete classRosterArray[i];

			 classRosterArray[i] = nullptr;

		 }


	 }

 }



 void Roster::remove(string studentID) {

	 
	 for (int i = 0; i < 5; ++i) {

		 string temp;

		 if (classRosterArray[i] != nullptr) {

			 temp = classRosterArray[i]->GetstudentID();

			 if (temp == studentID) {

				 delete classRosterArray[i];

				 classRosterArray[i] = nullptr;                                                   //gives memory back and gets rid of bad pointer

				 return;
			 }

		 }

	 }
		 
	 cout << "The student ID: " << studentID << " was not found. " << endl;
	 

 }
	


	
void Roster::printAll() {



	for (int i = 0; i < 5; i++) {

		if (classRosterArray[i] != nullptr) {

			classRosterArray[i]->print();

		}
	}

}

void Roster::printAverageDaysInCourse(string studentID) {

	string temp;
	int *a;
	int x = 0;
	int y = 0;

	for (int i = 0; i < 5; ++i) {

		if (classRosterArray[i] != nullptr) {

			temp = classRosterArray[i]->GetstudentID();

			if (temp == studentID) {

				a = classRosterArray[i]->GetnumDays();

			for (int j = 0; j < 3; ++j) {
				x += *a;
				
				a++;
			}
				
			y = x / 3; 

			cout << "The average number of days of student ID " << studentID << " is " << y;

				
				}


			}

			

		}

	}


void Roster::printInvalidEmails() {

	for (int i = 0; i < 5; ++i) {

		string temp;

		if (classRosterArray[i] != nullptr) {

			temp = classRosterArray[i]->GetemailAddress();
			
			if (temp.find("@") == temp.npos) {                                // == doesnt print // != prints

				cout << "Invalid Email Address: " << temp << endl; 

			}

			else if (temp.find(".") == temp.npos) {

				cout << "Invalid Email Address: " << temp << endl;
			}
			
			else if (temp.find(' ') != temp.npos) {

				cout << "Invalid Email Address: " << temp << endl;
			}
			
	
		}

	}
}



void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
	DegreeProgram temp; 

	for (int i = 0; i < 5; ++i) {

		if (classRosterArray[i] != nullptr) {

			temp = classRosterArray[i]->GetdegreeProgram();

			if (temp == degreeProgram) {
				classRosterArray[i]->print(); 


			}


		}


	}


}

