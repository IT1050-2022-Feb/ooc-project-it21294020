#include <iostream>
#include "offers.h"
#include <cstring>

using namespace std;

Offers :: offers()

	{
		OfferID = 0;
	}
	


void Offers :: setoffers(int oID)
{
	offerID = oID;
}

double Offers :: OfferType()

{	
}

double Offers :: displayOfferDetails()

{
	cout << "Offers" << endl;
	cout << "---------------------" << endl;
	cout << "offerID : " < offerID << endl;
	cout << "---------------------" << endl;
}

Offers :: ~Offers()
{
	cout << "Delete Payment Class " << endl;

}
