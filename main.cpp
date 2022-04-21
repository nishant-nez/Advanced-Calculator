#include<iostream>
// #include<cmath>
#include<fstream>
#include<iomanip>

#include"AdvancedCalculator.h"

using namespace std;

int main() {
    int choice;


    cout << endl << setw(60) << "Welcome to Advanced Calculator!!!" << endl;  
    cout << "     -----------------------------------------------------------------------------     " << endl;
    cout << setw(45) << "MENU" << endl << endl;
    cout << setw(52) << "1) Simple Calculator" << endl;
    cout << setw(54) << "2) Advanced Calculator" << endl;
    cout << setw(52) << "3) Operation History" << endl << endl << endl;

    // cout<<"Enter the required operator:"<<endl;
    cin>>choice;
    system("CLS");
 
    cout << "test";




    string opr = "exp";
    Calculator c1(27);
    // cout << c1.cubeRoot();
    // cout << c1.cosinv();

    // string exp;
    // char temp;
    // double num1, num2;
    // cin >> num1;
    // cin >> temp;
    // cin >> num2;
    // double num3 = num1/num2;

    // cout << "\n" << num3;
    int range=5;
    double result;
    double fileData;
    char temp = 'n';

    AdvancedCalculator* expression[50];

    // for(int i=0; i<1; i++) {
    //     double fo;
    //     double so;
    //     if(temp=='y' || temp =='Y') {
    //         cout << "Enter first operand: ";
    //         cin >> fo;
    //         cout << "Enter second operand: ";
    //         cin >> so;
    //         expression[i] = new AdvancedCalculator(fo, so);
    //     }
    //     else {
    //         cout << "Enter the operand: ";
    //         cin >> fo;
    //         expression[i] = new AdvancedCalculator(fo);
    //     }
    // }

    // if(opr=="exp") {
    //     double result = expression[0] -> exponential();
    // }
    // expression[0] -> setResult(result);

    // FILE OPERATIONS
    // ofstream objwrite("data.dat", ios::binary);
    // objwrite.write(reinterpret_cast<char*>(&expression[0]), sizeof(expression[0]));
    // objwrite.close();

    // ifstream objread("data.dat", ios::binary);
    // objread.read(reinterpret_cast<char*>(&expression[0]), sizeof(expression[0]));
    // objread.close();

    // cout << endl << expression[0] -> getResult();

    // cout << endl << "ENDL ENDL ENDL ENDL ENDL";
    // cin >> opr;
    // system("CLS");
    // system("clear");


    // SAMMY
    


   
//    switch(number){
//        case 1:
}