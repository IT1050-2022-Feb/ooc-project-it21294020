
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
