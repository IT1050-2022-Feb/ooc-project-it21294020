
#include "Customer.h"
#include <cstring>
#include <iostream>
using namespace std;

Customer::Customer()
{
}

Customer::Customer(const char cname[], int cmobile, const char cemail[], const char caddres[], const char cdob[])
{
	strcpy(Name, cname);
	strcpy(email, cemail);
	mobile = cmobile;
	strcpy(addres, caddres);
	strcpy(dob, cdob);
}

void Customer::Register()
{
}


void Customer::DisplayDetail()
{
	cout<<"Customer Detail"<<endl
		<<"--------------------------"<<endl
		<< "Customer Name : " << Name << endl
		<< "Email : " << email << endl
		<< "Mobile No : " << mobile << endl
		<< "addres :" << addres << endl
		<< "Date Of Birth" << dob << endl<<endl;
}

void Customer::CheckHotels()
{
}

void Customer::CheckHalls()
{
}

void Customer::CheckWeddingPackages()
{
}

void Customer::CheckFoodPackages()
{
}

Customer::~Customer()
{
}
