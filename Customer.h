

class Customer
{
protected:

	char Name[20];
	int mobile;
	char email[15];
	char addres[20];
	char dob[15];


public:
	Customer();
	Customer(const char cname[], int cmobile,const char cemail[],const char caddres[],const char cdob[]);
	void Register();
	void DisplayDetail();
	void CheckHotels();
	void CheckHalls();
	void CheckWeddingPackages();
	void CheckFoodPackages();
	~Customer();


};