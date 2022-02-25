#ifndef ROSTER_H
#define ROSTER_H


using namespace std;

class Roster {

public:
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
	void remove(string studentID);
	void printAll(); 
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(DegreeProgram degreeProgram);
	void parse(string dataString);
	string studentID(int j);
	~Roster();	

private:
	Student* classRosterArray[5];                                      
	int arrayIndex = 0;
	


	






};
#endif // !ROSTER_H




