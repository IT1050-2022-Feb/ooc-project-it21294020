#include<cstring>

using namespace std;

class FoodPackage
{
private:

	int FPcode;
	char FPName[10];
	double FPPrice;

public:
	FoodPackage();
	FoodPackage(int Fcode, const char FName[], double FPrice);
	void AddFoodPackageDetails(int Fcode, const char FName[], double FPrice);
	void updateFoodPackageDetails();
	void DeleteFoodPackageDetails();
	void DisplayFoodPackageDetails();
	~FoodPackage();




};