#include "../headers/module3.h"
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream outputFile("module3_output.txt");
    outputFile << "This is Module 3" << endl;
    outputFile.close();
    cout << "Module 3 has written its message." << endl;
    return 0;
}
