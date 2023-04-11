#include <iostream>
#include <fstream>
using namespace std;

using namespace std;

int main(){
	
	ofstream outFile("example.txt");
	
	outFile << " Nama saya Rini";
	
	outFile.close();
}
