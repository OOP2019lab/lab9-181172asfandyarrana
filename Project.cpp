#include "Project.h"


Project::Project(char* Name, int Budget, int Duration)
{
	name=new char[strlen(Name+1)];
	for (int i=0; Name[i]!= '/0';i++)
	{
		name[i]=Name[i];
	}
	budget=Budget;
	duration=Duration;

}
Project::Project(const Project& a1)
{
	name=new char[strlen(a1.name+1)];
	for (int i=0; a1.name[i]!= '/0';i++)
	{
		name[i]=a1.name[i];
	}
	budget=a1.budget;
	duration=a1.duration;


}
ostream& operator<<(ostream& out, const Project& a1)
{
	for (int i=0; a1.name[i]!= '/0';i++)
	{
		out<<a1.name[i];
	}
	out<<a1.budget;
	out<<a1.duration;


}
void Project::setBudget(int a)
{
	budget=a;
	
}
Project::~Project()
{
	delete [] name;
	duration=-1;
	budget=-1;
}
