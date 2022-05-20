#include<cstring>

using namespace std;

class weddingPackage
{
private:

	int wpcode;
	char wpName[10];
	char Decorations[30];
	double wpPrice;

public:
	weddingPackage();
	weddingPackage(int wcode, const char wName[], double wPrice, const char wDecorations[]);
	void AddweddingPackageDetails(int wcode, const char wName[], double wPrice, const char wDecorations[]);
	void updateWeddingPackageDetails();
	void DeleteWeddingPackageDetails();
	void DisplayWeddingPackageDetails();
	~weddingPackage();




};

