#include<iostream>
#include<fstream>
#include<typeinfo>
#include"Calculator.h"

using namespace std;

template<class T>
T previousResult() {
    T fo;
    cin >> fo;
    cout << endl << typeid(fo).name() << endl;
    return fo;
}

int main() {
    double fo=0;
    double so=0;
    string temp="test0";
    cin>>so;
    cout << "Enter first operand: ";
    fo = previousResult<double>();
    cout << fo;
    // cout << endl << typeid(previousResult()).name() << endl;
    // cout << "Enter second operand: ";
    // cin >> so;

}