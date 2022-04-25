#include<iostream>
// #include<cmath>
#include<fstream>
#include<iomanip>

#include"AdvancedCalculator.h"
// #include"graphPlot/pbPlots.hpp"
// #include"graphPlot/supportLib.hpp"

using namespace std;

Calculator* SimpleExpression[50];
AdvancedCalculator* AdvExpression[50];

void menu() {
    cout << endl << setw(60) << "Welcome to Advanced Calculator!!!" << endl;  
    cout << "     -----------------------------------------------------------------------------     " << endl;
    cout << setw(45) << "MENU" << endl << endl;
    cout << setw(52) << "1) Simple Calculator" << endl;
    cout << setw(54) << "2) Advanced Calculator" << endl;
    cout << setw(52) << "3) Operation History" << endl << endl << endl;
}

// .//
void calcWrite(int i) {
    ofstream writeData("data.txt", ios::binary);
    writeData.write(reinterpret_cast<char*>(&SimpleExpression[i]), sizeof(SimpleExpression[i]));
}

// ../
void readFile(int choice, int i) {
    ofstream readData("data.txt", ios::binary);
    readData.write(reinterpret_cast<char*>(&SimpleExpression[i]), sizeof(SimpleExpression[i]));
}

int main() {
    int choice;

    menu();
    cin>>choice;
 
    if(choice!=1 && choice!=2 && choice!=3) {
        do {
            cout << "Invalid Option Please try again! : ";
            cin >> choice;
        } while(choice!=1 && choice!=2 && choice!=3);
    }

    // SIMPLE CALCULATOR
    if(choice==1) {
        system("CLS");
        int i=0;
        double fo=0;
        double so=0;
        char ch;
        double rslt=0;
        string oper;

        // UI CODE HERE

        //
        

        do
        {
            rslt = 0;
            cin >> oper;

            // BASIC ARITHMETIC
            if(oper=="+") {
                cout << "Enter the first operand value: ";
                cin >> fo;
                cout << "Enter the second operand value: ";
                cin >> so;
                SimpleExpression[i] = new Calculator(fo, so);

                rslt = SimpleExpression[i]-> add();
            }
            else if(oper=="-") {
                cout << "Enter the first operand value: ";
                cin >> fo;
                cout << "Enter the second operand value: ";
                cin >> so;
                SimpleExpression[i] = new Calculator(fo, so);

                rslt = SimpleExpression[i]-> sub();
            }
            else if(oper=="*") {
                cout << "Enter the first operand value: ";
                cin >> fo;
                cout << "Enter the second operand value: ";
                cin >> so;
                SimpleExpression[i] = new Calculator(fo, so);

                rslt = SimpleExpression[i]-> mul();
            }
            else if(oper=="/") {
                cout << "Enter the first operand value: ";
                cin >> fo;
                cout << "Enter the second operand value: ";
                cin >> so;
                SimpleExpression[i] = new Calculator(fo, so);

                rslt = SimpleExpression[i]-> div();
            }
            else if(oper=="mod") {
                cout << "Enter the first operand value: ";
                cin >> fo;
                cout << "Enter the second operand value: ";
                cin >> so;
                SimpleExpression[i] = new Calculator(fo, so);

                rslt = SimpleExpression[i]-> modulo();
            }

            // TRIGONOMETRIC
            else if(oper=="sin") {
                cout << "Enter the value: ";
                cin >> fo;
                SimpleExpression[i] = new Calculator(fo);

                rslt = SimpleExpression[i]->sinCalc();
            }
            else if(oper=="cos") {
                cout << "Enter the value: ";
                cin >> fo;
                SimpleExpression[i] = new Calculator(fo);

                rslt = SimpleExpression[i]-> cosCalc();
            }
            else if(oper=="tan") {
                cout << "Enter the value: ";
                cin >> fo;
                SimpleExpression[i] = new Calculator(fo);

                rslt = SimpleExpression[i]-> tanCalc();
            }
            else if(oper=="cosec") {
                cout << "Enter the value: ";
                cin >> fo;
                SimpleExpression[i] = new Calculator(fo);

                rslt = SimpleExpression[i]-> cosecCalc();
            }
            else if(oper=="sec") {
                cout << "Enter the value: ";
                cin >> fo;
                SimpleExpression[i] = new Calculator(fo);

                rslt = SimpleExpression[i]-> secCalc();
            }
            else if(oper=="cot") {
                cout << "Enter the value: ";
                cin >> fo;
                SimpleExpression[i] = new Calculator(fo);

                rslt = SimpleExpression[i]-> cotCalc();
            }

            // POWER
            else if(oper=="sqrt") {
                cout << "Enter the value: ";
                cin >> fo;
                SimpleExpression[i] = new Calculator(fo);

                rslt = SimpleExpression[i]-> squareRoot();
            }
            else if(oper=="cbrt") {
                cout << "Enter the value: ";
                cin >> fo;
                SimpleExpression[i] = new Calculator(fo);

                rslt = SimpleExpression[i]-> cubeRoot();
            }
            else {
                cout << endl << "Invalid Operator!";
            }

            cout << "Result : " << rslt;
            SimpleExpression[i] -> setResult(rslt);
            ofstream writeData("SimpleData.txt", ios::binary);
            writeData.write(reinterpret_cast<char*>(&SimpleExpression[i]), sizeof(SimpleExpression[i]));

            i++;
            cout << endl << "Calculate again? (y/n) ";
            cin >> ch;

        } while (ch=='y' || ch=='Y');
        

    }

    // ADVANCED CALCULATOR
    else if (choice==2) {
        system("CLS");
        int i=0;
        double fo=0;
        double so=0;
        char ch;
        double rslt=0;
        string oper;

        // UI CODE HERE
        
        //
        do {
            rslt = 0;
            cin >> oper;

            if(oper=="fact") {
                cout << "Enter the first operand value: ";
                cin >> fo;
                AdvExpression[i] = new AdvancedCalculator(fo);

                rslt = AdvExpression[i]-> fact();
            }
            else if(oper=="exp") {
                cout << "Enter the first operand value: ";
                cin >> fo;
                AdvExpression[i] = new AdvancedCalculator(fo);

                rslt = AdvExpression[i]-> exponential();
            }
            else if(oper=="comb") {
                cout << "Enter the n: ";
                cin >> fo;
                cout << "Enter r: ";
                cin >> so;
                AdvExpression[i] = new AdvancedCalculator(fo, so);

                rslt = AdvExpression[i]-> combination();
            }
            else if(oper=="per") {
                cout << "Enter the n: ";
                cin >> fo;
                cout << "Enter r: ";
                cin >> so;
                AdvExpression[i] = new AdvancedCalculator(fo, so);

                rslt = AdvExpression[i]-> permutation();
            }
            else {
                cout << endl << "Invalid Operator!";
            }

            cout << "Result : " << rslt;
            AdvExpression[i] -> setResult(rslt);
            ofstream writeData("AdvData.txt", ios::binary);
            writeData.write(reinterpret_cast<char*>(&AdvExpression[i]), sizeof(AdvExpression[i]));

            i++;
            cout << endl << "Calculate again? (y/n) ";
            cin >> ch;
            
        } while(ch=='y' || ch=='Y');
        
    }
   
    
    cout << "PASS";

    // int acnum=0;
    // int temp=-1*;
    // acnum = acnum * 10 + arrnum[i];


    // GRAPH
    // double xvals[5] = {-2, -1, 0, 1, 2};
    // double yvals[5] = {2, -1, -2, -1, 2};
    // AdvancedCalculator objTest;
    // objTest.graph(xvals, yvals);

    // RGBABitmapImageReference *imageRef = CreateRGBABitmapImageReference();
    // vector<double> x{-2, -1, 0, 1, 2};
    // vector<double> y{2, -1, -2, -1, 2};

    // DrawScatterPlot(imageRef, 600, 400, &x, &y);

    // vector<double> *pngData = ConvertToPNG(imageRef->image);
    // WriteToFile(pngData, "plot.png");
    // DeleteImage(imageRef->image);

    // string opr = "exp";
    // Calculator c1(27);

    
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

    // AdvancedCalculator* expression[50];

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