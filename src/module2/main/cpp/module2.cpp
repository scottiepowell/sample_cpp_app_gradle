#include "../headers/module2.h"
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream outputFile("module2_output.txt");
    outputFile << "This is Module 2" << endl;
    outputFile.close();
    cout << "Module 2 has written its message." << endl;
    return 0;
}
