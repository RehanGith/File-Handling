#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int n1 = 29;
	int n2 = 290928;
	char ch{ 'C' };
	ofstream outfile;
	outfile.open("abc.txt", ios::app);
	if (!outfile) {
		cout << "Error opening File" << endl;
		exit(-1);
	}
	outfile << n1 << "      " << n2 << "      " << ch << endl;
	ifstream infile;
	int readn1, readn2;
	char readch;
	infile.open("abc.txt", ios::in);
	if (!infile) {
		cout << "Error opening File" << endl;
		exit(-1);
	}
	infile >> readn1 >> readn2 >> readch;
	cout << "Read: " << readn1 << " " << readn2 << " " << readch << endl;
	outfile.close();
	return 0;
}