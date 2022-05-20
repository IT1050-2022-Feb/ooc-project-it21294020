#include <iostream>
#include "payment.h"
#include <cstring>
using namespace std;

Payment :: Payment()
{
	payID = 0;
	strcpy(payType, "");
	payAmount = 0;
	
}

void Payment :: setPayment(int pID , const char ppayType[], double ppayAmount)
{
	payID = pID;
	strcpy(payType , ppayType);
	payAmount = ppayAmount;
}

void Payment :: checkPayment()

{	
}

void Payment :: confirmPayment()

{
}

void Payment :: displayPaymentDetails()

{
  cout << "Payment Details" << endl;
  cout << "---------------" << endl;
  cout << "payID : " << payID << endl;
  cout << "Payment Type : " << payType << endl;
  cout << "Payment Amount : " << payAmount << endl;
  cout << "---------------" << endl;
}

Payment :: ~Payment()
{
	
  cout << "Delete Payment Class" << endl;
}
 
