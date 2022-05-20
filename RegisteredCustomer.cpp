

#include "RegisteredCustomer.h"
#include <cstring>
#include <iostream>
using namespace std;

RegisteredCustomer::RegisteredCustomer()
{
	cid = 0;
	strcpy(username, "");
}

RegisteredCustomer::RegisteredCustomer(int custid, const char cusername[])
{
	cid = custid;
	strcpy(username, cusername);
}

void RegisteredCustomer::setPersonalDetails(const char cname[],const char cemail[], int cmobile, const char caddres[], const char cdob[])
{
	strcpy(Name, cname);
	strcpy(email, cemail);
	mobile = cmobile;
	strcpy(addres, caddres);
	strcpy(dob, cdob);
}

void RegisteredCustomer::DisplayDetails()
{
	cout << "Registered Customer ID : " << cid << endl
		<< "Username : " << username << endl
		<<"Name : "<<Name<<endl
		<<"Email : "<<email<<endl
		<< "Mobile No:" << mobile << endl
		<< "Addres : " << addres << endl
		<< "Date Of Birth : " << dob << endl<<endl;
}

void RegisteredCustomer::SelectHotel()
{
}

void RegisteredCustomer::SelectHall()
{
}

void RegisteredCustomer::SelectWeddingPackage()
{
}

void RegisteredCustomer::SelectFoodPackage()
{
}

void RegisteredCustomer::MakePayment()
{
}

void RegisteredCustomer::logout()
{
}

RegisteredCustomer::~RegisteredCustomer()
{
	
}
