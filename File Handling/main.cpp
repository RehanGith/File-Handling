#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    int n1 = 29;
    int n2 = 290928;
    char ch{ 'C' };
    string name{ "Muhammad rehan" };
    string name2{ "Ayaz Ahmed" };
    ofstream outfile;
    outfile.open("abc.txt", ios::app);
    if (!outfile) {
        cout << "Error opening File" << endl;
        exit(-1);
    }
    outfile << n1 << endl;
    outfile << n2 << endl;
    outfile << ch << endl;
    outfile << name << "|" << name2 << endl;
    outfile.close();
    ifstream infile;
    int readn1, readn2;
    char readch;
    string readname, readname2;
    infile.open("abc.txt", ios::in);
    if (!infile) {
        cout << "Error opening File" << endl;
        exit(-1);
    }
    infile >> readn1 >> readn2 >> readch;
    getline(infile, readname, '|');
    getline(infile, readname2);
    cout << "Read: " << readn1 << " " << readn2 << " " << readch << " " << readname << " " << readname2 << endl;
    infile.close();

    return 0;
}