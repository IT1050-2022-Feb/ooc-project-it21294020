#include "weddingPackage.h"
#include <cstring>
#include <iostream>
using namespace std;

weddingPackage::weddingPackage()
{
	
}

weddingPackage::weddingPackage(int wcode, const char wName[], double wPrice, const char wDecorations[])
{
	wpcode = wcode;
	strcpy(Decorations, wDecorations);
	wpPrice = wPrice;
	strcpy(wpName,wName);
}

void AddweddingPackageDetails(int wcode, const char wName[], double wPrice, const char wDecorations[])
{
	
}


void weddingPackage::updateWeddingPackageDetails()
{
}

void weddingPackage::DeleteWeddingPackageDetails()
{
}

void weddingPackage::DisplayWeddingPackageDetails()
{
	cout << "Wedding Package Code : " << wpcode << endl
		<< "Wedding Package Name : " << wpName << endl
		<< "Decoration : " << Decorations << endl
		<< "Wedding Package Price : " << wpPrice << endl;
}

weddingPackage::~weddingPackage()
{
}
