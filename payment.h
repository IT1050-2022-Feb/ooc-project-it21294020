class Payment
{
	private:
		int payID;
		char payType[20];
		double payAmount;
	
	public:
	    Payment();
		void setPayment(int pID , const char ppayType[] , double ppayAmount);
		int checkPayment();
		double confirmPayment();
		double displayPaymentDetails();
		~Payment();	
};
