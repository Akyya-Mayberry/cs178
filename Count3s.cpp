// Name: Akyya Mayberry
// Course: CS178 Build Automation for DevOps and QA
// CRN: 76718
// Date: 9/14/2017
// Assignment: Count Threes in a Binary File

#include <iostream>
#include <fstream>
using namespace std;

int charOccurs(char character, char collection[], int size) {
		// Reads through a collection of elements
		// and read the occurences of a given character

		int charCount = 0;
		for (int i=0; i < size; i++) {
			if (collection[i] == character) {
				//cout << memblock[i] << '\n';
				charCount++;
			}
		}
		return charCount;
}

int main() {
	char * memblock; // Holds read characters from file
	streampos size; // Keeps track of total size of file

	// ios::ate starts pointer/get at the end of the file
	ifstream binFile ("threesData.bin", ios::in | ios::binary | ios::ate);

	if (binFile.is_open()) {
		// Tellg lets us know end of file as it points to the end of the file
		size = binFile.tellg();

		// Allocate block of memory for reading in characters
		memblock = new char [size];

		// Go back to the beginning of the file
		// and begin reading in characters to the memblock
		binFile.seekg(0, ios::beg);
		binFile.read(memblock, size);
		binFile.close();
	} else {
		cout << "Cannot open file!";
	}
	int total = charOccurs('3', memblock, size);
	delete[] memblock;
	return total;
}
