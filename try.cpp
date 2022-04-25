#include<iostream>
#include<fstream>
#include"Calculator.h"

using namespace std;

int main() {
    Calculator calc1(23);
    Calculator calc2(69);
    cout << endl << calc1.getFirstOperand() << " " << calc1.getFirstOperand();
    cout << endl << calc2.getFirstOperand() << " " << calc2.getFirstOperand();

    ofstream writeFile("sample.txt", ios::binary);
    writeFile.write(reinterpret_cast<char*>(&calc1), sizeof(calc1));
    writeFile.write(reinterpret_cast<char*>(&calc2), sizeof(calc1));

    ifstream readFile("sample.txt", ios::binary);
    readFile.read(reinterpret_cast<char*>(&calc1), sizeof(calc1));
    readFile.read(reinterpret_cast<char*>(&calc2), sizeof(calc2));

    cout << endl << calc1.getFirstOperand() << " " << calc1.getFirstOperand();
    cout << endl << calc2.getFirstOperand() << " " << calc2.getFirstOperand();
}