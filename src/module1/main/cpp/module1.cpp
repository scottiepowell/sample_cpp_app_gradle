#include "../headers/module1.h"
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream outputFile("module1_output.txt");
    outputFile << "This is Module 1" << endl;
    outputFile.close();
    cout << "Module 1 has written its message." << endl;
    return 0;
}
