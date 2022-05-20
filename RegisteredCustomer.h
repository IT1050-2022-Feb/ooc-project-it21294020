

class RegisteredCustomer : public Customer
{
private:
	int cid;
	char username[10];
	char password[8];
	

public:
	RegisteredCustomer();
	RegisteredCustomer(int custid, const char cusername[]);
	void setPersonalDetails(const char cname[],const char cemail[], int cmobile, const char caddres[], const char cdob[]);
	void DisplayDetails();
	void SelectHotel();
	void SelectHall();
	void SelectWeddingPackage();
	void SelectFoodPackage();
	void MakePayment();
	void logout();
	~RegisteredCustomer();
};

