#include <iostream>
#include "offers.h"
#include <cstring>

using namespace std;

offers::offers()

{
	offerID = 0;
}



offers::offers(int oID)
{
	offerID = oID;
}

void offers::offertype()

{
}

void offers::displayOfferDetails()

{
	
	cout << "Offers" << endl
	<< "---------------------" << endl
	<< "offerID : " <<offerID<< endl
	<< "---------------------" << endl<<endl;
}

offers :: ~offers()
{
	cout << "Delete Payment Class " << endl;

}

