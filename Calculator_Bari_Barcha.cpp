#include <iostream>

using namespace std;
	
int main()
{

	int cdate;
	int cmonth;
	int cyear;
	int bdate;
	int bmonth;
	int byear;
	
	
	cout << "\t\t\tHello, Welcome to Age calulator\n\n\n";

	cout << "Enter Current Date: ";
	cin >> cdate;
	cout << "Enter Current Month: ";
	cin >> cmonth;
	cout << "Enter Current Year: ";
	cin >> cyear;
	cout << "\nEnter Birth Date: ";
	cin >> bdate;
	cout << "Enter Birth Month: ";
	cin >> bmonth;
	cout << "Enter Birth Year: ";
	cin >> byear;

	int month[] = { 31, 28, 31, 30, 31, 30, 31,31, 30, 31, 30, 31 };

	
	if (bdate > cdate) {
		cdate = cdate + month[bmonth - 1];
		cmonth = cmonth - 1;
	}

	
	if (bmonth > cmonth) {
		cyear = cyear - 1;
		cmonth = cmonth + 12;
	}

	// calculate date, month, year
	int caldate = cdate - bdate;
	int calmonth = cmonth - bmonth;
	int calyear = cyear - byear;

	// print the present age
	cout << "\nYou are\nYears: " << calyear << " Months: " << calmonth << " Days: " << caldate << endl;
	cout <<"\t\t\tThank you for using the app\n \t\t\t\tHave a Good Day";


	return 0;
}
