#include <iostream>
using namespace std; 

int main (){
	
	int Phone_Number, book=20, pen=10, file=25, notebook=45; 
	int book1, pen1, file1, notebook1, Total; 
	char Name[25];
	
	cout << "*******************************************************\n\n\t\t Alpha Centuri \n\n*******************************************************\n";
	cout << "\nValued Customer Enter Number of Products purchased\n";
	
	cout << "Enter your Name: \n";
	cin >> Name;
	cout << "Enter your Phone Number: \n";
	cin >> Phone_Number;
	
	cout << "Enter Books Purchased: \t";
	cin >> book1;
	cout << "Enter Pen Purchased: \t";
	cin >> pen1;
	cout << "Enter File Purchased: \t";
	cin >> file1;
	cout << "Enter Notebooks Purchased: ";
	cin >> notebook1;
	
	cout << "\n******************************************************\n";
	cout << "\t\nThanks for Shopping with us " << Name << " (" << Phone_Number << ")\n";
	cout << "\n*********************** Grand Total ******************\n";
	Total = book1 * book;
	cout << "\n("<<book1<< ") " << "Book: " << Total;	
		Total = pen1 * pen;
	cout << "\n("<<pen1<< ") " << "Pen: " << Total;
		Total = file1 * file;
	cout << "\n("<<file1<< ") " << "File: " << Total;
		Total = notebook1 * notebook;
	cout << "\n("<<notebook1<< ") " << "Notebook: " << Total;
	
	Total = book1 * book + pen1 * pen + file1 * file + notebook1 * notebook;
	cout << "\n\t\n\t Your Grand Total is: $ " << Total;
	
	return 0;
}