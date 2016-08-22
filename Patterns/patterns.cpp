/* Author: Sunny Chowdhury
This program prints patterns 
nested for loops*/

#include <iostream>	
using namespace std;

void pattern1(int size);
void pattern2(int size);
void pattern3(int size);

int main() {
	int size;
	
	cout << "Enter the size of the pattern: ";
	cin >> size;

	pattern1(size);
	cout << "----------------" << endl;
	pattern2(size);
	cout << "----------------" << endl;
	pattern3(size);
	cout << "----------------" << endl;

	cout << endl;
	system("pause");
	return 0;
}


void pattern1(int size) {
	//------------//
	//       #
	//      ##
	//     ###
	//    ####
	//-----------//

	int numRows = size;
	int numCols = size - 1;
	
	for (int rowIndex = 1; rowIndex <= numRows; rowIndex++) {
		// There is one less col than number of rows
		for (int colIndex1 = 1; colIndex1 <= numCols; colIndex1++) {
			cout << ' ';
		}
		numCols--;
		// The number of cols equals the number of rows
		for (int colIndex2 = 1; colIndex2 <= rowIndex; colIndex2++) {
			cout << "#";
		}
		cout << endl;
	}
}

void pattern2(int size) {
	//------------//
	//    #
	//    ##
	//    ###
	//    ####
	//-----------//
	/*for (int row = 0; row < size; row++) {
		for (int col = 0; col < row + 1; col++) {
			cout << "#";
		}
		cout << endl;
	}*/
	// Alternative method
	for (int row = 1; row <= size; row++) {
		for (int col = 1; col <= row; col++) {
			cout << "#";
		}
		cout << endl;
	}
}
void pattern3(int size) {
	//------------//
	//    ####   
	//    ###  
	//    ## 
	//    #
	//-----------//
	for (int row = 0; row < size; row++) {
		for (int col = 0; col < size - row; col++) {
			cout << "#";
		}
		cout << endl;
	}
}