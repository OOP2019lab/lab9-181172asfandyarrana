#include "Address.h"


Address::Address(char* House_Number, char* Street_Name, char * City,char* County)
{
	house_Number=new char[strlen(House_Number+1)];
	for (int i=0; House_Number[i]!= '/0';i++)
	{
		house_Number[i]=House_Number[i];
	}
	street_Name=new char [strlen(Street_Name+1)] ;
	for (int i=0; Street_Name[i]!= '/0';i++)
	{
		street_Name[i]=Street_Name[i];
	}
	city=new char [strlen(City+1)] ;
	for (int i=0; City[i]!= '/0';i++)
	{
		city[i]=City[i];
	}
	county=new char [strlen(County+1)] ;
	for (int i=0; County[i]!= '/0';i++)
	{
		county[i]=County[i];
	}
}
Address::Address(const Address& A1)
{
	house_Number=new char[strlen(A1.house_Number+1)];
	for (int i=0; A1.house_Number[i]!= '/0';i++)
	{
		house_Number[i]=A1.house_Number[i];
	}
	street_Name=new char [strlen(A1.street_Name+1)] ;
	for (int i=0; A1.street_Name[i]!= '/0';i++)
	{
		street_Name[i]=A1.street_Name[i];
	}
	city=new char [strlen(A1.city+1)] ;
	for (int i=0; A1.city[i]!= '/0';i++)
	{
		city[i]=A1.city[i];
	}
	county=new char [strlen(A1.county+1)] ;
	for (int i=0; A1.county[i]!= '/0';i++)
	{
		county[i]=A1.county[i];
	}


}

ostream& operator<<(ostream& out, const Address& a1)
{
	
	
	for (int i=0; a1.house_Number[i]!= '/0';i++)
	{
		out<<a1.house_Number[i];
	}
	
	for (int i=0; a1.street_Name[i]!= '/0';i++)
	{
		out<<a1.street_Name[i];
	}
	
	for (int i=0; a1.city[i]!= '/0';i++)
	{
		out<<a1.city[i];
	}

	for (int i=0; a1.county[i]!= '/0';i++)
	{
		out<<a1.county[i];
	}
	return out;
}

Address::~Address(void)
{
	delete [] house_Number;
	delete [] city;
	delete [] county;
	delete [] street_Name;
}
