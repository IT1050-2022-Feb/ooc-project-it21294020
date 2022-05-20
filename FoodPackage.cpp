#include "FoodPackage.h"
#include <cstring>
#include <iostream>
using namespace std;

FoodPackage::FoodPackage()
{
}

FoodPackage::FoodPackage(int Fcode, const char FName[], double FPrice)
{
	FPcode = Fcode;
	strcpy(FPName, FName);
	FPPrice = FPrice;
}

void FoodPackage::AddFoodPackageDetails(int Fcode, const char FName[], double FPrice)
{
}

void FoodPackage::updateFoodPackageDetails()
{
}

void FoodPackage::DeleteFoodPackageDetails()
{
}

void FoodPackage::DisplayFoodPackageDetails()
{
	cout << "Food Package Code : " << FPcode << endl
		<< "Food Package Name : " << FPName << endl
		<< "Food Package Price : " << FPPrice << endl;
}

FoodPackage::~FoodPackage()
{
}
