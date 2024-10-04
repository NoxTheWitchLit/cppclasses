#include <iostream>
using namespace std;
class student {
private:
	string name;
	int mathGrade;
	int scienceGrade;
	int englishGrade;
	int gpa;
public:
	student();
	student(string potato, int MathGrade, int ScienceGrade, int EnglishGrade);
	void getAverage();
	void printReport();
};

int main() {
	student alice ("alice", 65, 100, 95);
	alice.getAverage();
	alice.printReport();

}

void student::getAverage() {
	gpa = (mathGrade + scienceGrade + englishGrade) / 3;
	cout << "gpa is " << gpa << endl;

}

void student::printReport() {
	cout << "Name: " << name << " Math Grade: " << mathGrade << " Science Grade: " << scienceGrade << " English Grade: " << englishGrade << " GPA: " << gpa << endl; 
}

student::student(string potato, int MathGrade, int ScienceGrade, int EnglishGrade) {
	name = potato;
	scienceGrade = ScienceGrade;
	mathGrade = MathGrade;
	englishGrade = EnglishGrade;

	//plug the other parameters in here



}
