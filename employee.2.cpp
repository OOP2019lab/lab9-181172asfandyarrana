// lab 9 181172.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Employee.h"


Employee::Employee(char* Name, const Address& address)
{
	emp_name = new char[strlen(Name + 1)];
	for (int i = 0; Name[i] != '/0'; i++)
	{
		emp_name[i] = Name[i];
	}
	A = &address;
	for (int i = 0; i < 2; i++)
	{
		p[i] = nullptr;
	}
}

Employee::Employee(const Employee& e1)
{
	emp_name = new char[strlen(e1.emp_name + 1)];
	for (int i = 0; e1.emp_name[i] != '/0'; i++)
	{
		emp_name[i] = e1.emp_name[i];
	}
	A = e1.A;
	for (int i = 0; i < 2; i++)
	{
		p[i] = e1.p[i];
	}
}
ostream& operator << (ostream& out, const Employee& dummy)
{

	out << "Employee Name: " << dummy.emp_name << endl;
	out << "Address: " << *dummy.A << ". His projects are follow: ";

	for (int i = 0; i < 2; i++)
	{
		if (dummy.p[i] != nullptr)
		{
			out << endl << *dummy.p[i];
		}

	}
	return out;

}



const Employee& Employee::operator = (const Employee& dummy)
{
	if (this != &dummy)
	{
		this->A = dummy.A;
		int s = strlen(dummy.emp_name) + 1;
		if (this->emp_name != nullptr)
		{
			delete[]emp_name;
		}

		this->emp_name = new char[s];
		strcpy_s(this->emp_name, s, dummy.emp_name);
		for (int i = 0; i < 3; i++)
		{
			this->p[i] = dummy.p[i];
		}

	}

	return *this;

}



void Employee::addProject(Project const* ptr)
{

	for (int i = 0; i < 2; i++)
	{

		if (this->p[i] == nullptr)
		{

			this->p[i] = ptr;

			break;

		}

	}

}

void Employee::removeProject(Project const* ptr)
{

	for (int i = 0; i < 2; i++)
	{

		if (p[i] == ptr)

			p[i] = nullptr;

	}

}



Employee::~Employee()
{
	delete this->A;

	if (this->emp_name != nullptr)

		delete[]this->emp_name;

}

