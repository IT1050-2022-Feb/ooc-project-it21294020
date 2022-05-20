
#include "Customer.h"
#include "RegisteredCustomer.h"
#include "weddingPackage.h"
#include "FoodPackage.h"
#include "payment.h"
#include "offers.h"
#include <iostream>
#include<cstring>
using namespace std;

int main()

{
	//customer
	Customer* c1;
	c1 = new Customer("Ranajan",776585487,"ranjan@gmail.com","Kesbew","1996-06-23");

	c1->DisplayDetail();

	//Registered customer
	RegisteredCustomer* rc1;
	

	rc1 = new RegisteredCustomer(01, "SamanP");
	
	rc1->setPersonalDetails("Saman Perera","saman@gmail.com", 778596489, "Dehiwala", "1986-05-25");
	
	rc1->DisplayDetails();
	


	//Wedding package
	weddingPackage* wp1;

	wp1 = new weddingPackage(333001,"classic", 800000,"white and blue theme");

	wp1->DisplayWeddingPackageDetails();



	//Food Package
	FoodPackage* fp1;

	fp1 = new FoodPackage(989001, "Silver", 2500);

	fp1->DisplayFoodPackageDetails();


	//Payment
	Payment* py1;

	py1 = new Payment();

	py1->setPayment(21, "Cash", 1000);
	py1->displayPaymentDetails();


	//Offers
	offers* of1;

	of1 = new offers(001);

	of1->displayOfferDetails();

	
	



	


	delete c1,rc1,wp1,fp1,of1;

	
	return 0;
}


