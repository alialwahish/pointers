#include<iostream>
#include<string>
using namespace std;


class student
{
public:
	student(const string& name, const string& ssn ):studName(name),studSSN(ssn)
	{}

	virtual void identify() 
	{
		cout << "Student :" << studName << " , Social Security Number :" << studSSN ;
	}
protected:
	string studName;
	string studSSN;
};

class studentAthlete : public student
{
public:
	studentAthlete(const string& name, const string& ssn,const string& sp):student(name,ssn),sport(sp)
	{}

	void identify()
	{
		student::identify();
		
		cout << " ,Sport " << "<"<<sport<<">"  ;
	}
private:
	string sport;
};