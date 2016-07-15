// Author Maryam 
// 15 July 
// Code to check if you pass or not 

#include<iostream> 
#include<iomanip> 
#include<cmath> 
#include<string> 
#include<istream>


using namespace std;

class Diploma_p{
private:
	double grade;
	string name;
	bool pass;
public:
	void setname(string);
	string getname();
	void setgrade(double);
	double getgrade();
	bool pass_not(double);
	void display();
};
void Diploma_p::setname(string first){
	name = first;
}
string Diploma_p::getname(){
	return name;
}
void Diploma_p::setgrade(double gra){
	grade = gra;
}
double Diploma_p::getgrade(){
	return grade;
}
bool Diploma_p::pass_not(double grad){
	grad = getgrade();

	if (grad>60)
		return true;
	else
		return false;
}
void Diploma_p::display(){

	if (pass_not(grade))
		cout << "you pass the course" << endl;
	else
		cout << "you do not pass" << endl;
}

int main(){

	Diploma_p Java;

	string namea;
	double yourgrade;
	cout << "enter the name" << endl;
	cin >> namea;
	cout << "enter the grade" << endl;
	cin >> yourgrade;
	Java.setgrade(yourgrade);
	Java.setname(namea);
	Java.pass_not(yourgrade);
	Java.display();

	system("pause");
	return 0;
}
