#include<iostream>
#include<string>
#include"student.h"
using namespace std;

int main()
{
	student ja("John Anderso", "345-12-3547");
	student bw("Bill Williams", "286-72-6194");
	studentAthlete bj("Bob Johnson", "294-87-6295", "football");
	studentAthlete dr("Dick Robinson", "669-28-9296", "baseball");
	studentAthlete ab("Ali Bayati", "123-99-3321", "soccer");
	student *stud[] = { &ja, &bw, &bj, &dr,&ab };

	for (int i = 0; i < 5; i++)
	{
		stud[i]->identify();
		cout << endl;
	}
	return 0;
}
/*Output
Student :John Anderso , Social Security Number :345-12-3547
Student :Bill Williams , Social Security Number :286-72-6194
Student :Bob Johnson , Social Security Number :294-87-6295 ,Sport <football>
Student :Dick Robinson , Social Security Number :669-28-9296 ,Sport <baseball>
Student :Ali Bayati , Social Security Number :123-99-3321 ,Sport <soccer>
Press any key to continue . . .*/