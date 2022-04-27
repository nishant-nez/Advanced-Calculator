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
// void calcWrite(int i) {
//     ofstream writeData("data.txt", ios::binary);
//     writeData.write(reinterpret_cast<char*>(&SimpleExpression[i]), sizeof(SimpleExpression[i]));
// }

// ../
// void readFile(int choice, int i) {
//     ofstream readData("data.txt", ios::binary);
//     readData.write(reinterpret_cast<char*>(&SimpleExpression[i]), sizeof(SimpleExpression[i]));
// }

int main() {
    int choice;

    menu();
    cout<<endl;
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
        int oper;
        

        do
        {
            rslt = 0;

            cout<<"-----------------Simple Calculator-------------------"<<endl<<endl;
            cout<<"[1]"<<setw(12)<<"Addition"<<endl;
            cout<<"[2]"<<setw(15)<<"Subtraction"<<endl;
            cout<<"[3]"<<setw(18)<<"Multiplication"<<endl;
            cout<<"[4]"<<setw(12)<<"Division"<<endl;
            cout<<"[5]"<<setw(10)<<"Modulo"<<endl;
            cout<<"[6]"<<setw(17)<<"Sine Function"<<endl;
            cout<<"[7]"<<setw(19)<<"Cosine Function"<<endl;
            cout<<"[8]"<<setw(20)<<"Tangent Function"<<endl;
            cout<<"[9]"<<setw(18)<<"Cosec Function"<<endl;
            cout<<"[10]"<<setw(15)<<"Sec Function"<<endl;
            cout<<"[11]"<<setw(15)<<"Cot Function"<<endl;
            cout<<"[12]"<<setw(14)<<"Square Root"<<endl;
            cout<<"[13]"<<setw(12)<<"Cube Root"<<endl<<endl;
            cin >> oper;

            system("CLS");

            // BASIC ARITHMETIC
            if(oper==1) {
                cout << "Enter the first operand value: ";
                cin >> fo;
                cout << "Enter the second operand value: ";
                cin >> so;
                SimpleExpression[i] = new Calculator(fo, so);

                rslt = SimpleExpression[i]-> add();
            }
            else if(oper==2) {
                cout << "Enter the first operand value: ";
                cin >> fo;
                cout << "Enter the second operand value: ";
                cin >> so;
                SimpleExpression[i] = new Calculator(fo, so);

                rslt = SimpleExpression[i]-> sub();
            }
            else if(oper==3) {
                cout << "Enter the first operand value: ";
                cin >> fo;
                cout << "Enter the second operand value: ";
                cin >> so;
                SimpleExpression[i] = new Calculator(fo, so);

                rslt = SimpleExpression[i]-> mul();
            }
            else if(oper==4) {
                cout << "Enter the first operand value: ";
                cin >> fo;
                cout << "Enter the second operand value: ";
                cin >> so;
                SimpleExpression[i] = new Calculator(fo, so);

                rslt = SimpleExpression[i]-> div();
            }
            else if(oper==5) {
                cout << "Enter the first operand value: ";
                cin >> fo;
                cout << "Enter the second operand value: ";
                cin >> so;
                SimpleExpression[i] = new Calculator(fo, so);

                rslt = SimpleExpression[i]-> modulo();
            }

            // TRIGONOMETRIC
            else if(oper==6) {
                cout << "Enter the value: ";
                cin >> fo;
                SimpleExpression[i] = new Calculator(fo);

                rslt = SimpleExpression[i]->sinCalc();
            }
            else if(oper==7) {
                cout << "Enter the value: ";
                cin >> fo;
                SimpleExpression[i] = new Calculator(fo);

                rslt = SimpleExpression[i]-> cosCalc();
            }
            else if(oper==8) {
                cout << "Enter the value: ";
                cin >> fo;
                SimpleExpression[i] = new Calculator(fo);

                rslt = SimpleExpression[i]-> tanCalc();
            }
            else if(oper==9) {
                cout << "Enter the value: ";
                cin >> fo;
                SimpleExpression[i] = new Calculator(fo);

                rslt = SimpleExpression[i]-> cosecCalc();
            }
            else if(oper==10) {
                cout << "Enter the value: ";
                cin >> fo;
                SimpleExpression[i] = new Calculator(fo);

                rslt = SimpleExpression[i]-> secCalc();
            }
            else if(oper==11) {
                cout << "Enter the value: ";
                cin >> fo;
                SimpleExpression[i] = new Calculator(fo);

                rslt = SimpleExpression[i]-> cotCalc();
            }

            // POWER
            else if(oper==12) {
                cout << "Enter the value: ";
                cin >> fo;
                SimpleExpression[i] = new Calculator(fo);

                rslt = SimpleExpression[i]-> squareRoot();
            }
            else if(oper==13) {
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
            if(ch=='y' || ch=='Y') {
                system("CLS");
            }

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
        int oper;

        
        //
        do {
            rslt = 0;
            // UI CODE HERE
            cout<<"-----------------Advanced Calculator-------------------"<<endl<<endl;
            cout<<"[1]"<<setw(13)<<"Factorial"<<endl;
            cout<<"[2]"<<setw(15)<<"Exponential"<<endl;
            cout<<"[3]"<<setw(15)<<"Combination"<<endl;
            cout<<"[4]"<<setw(15)<<"Permutation"<<endl;
            cout<<endl;
            cin>>oper;

        
            system("CLS");

            if(oper==1) {
                cout << "Enter the first operand value: ";
                cin >> fo;
                AdvExpression[i] = new AdvancedCalculator(fo);

                rslt = AdvExpression[i]-> fact();
            }
            else if(oper==2) {
                cout << "Enter the first operand value: ";
                cin >> fo;
                AdvExpression[i] = new AdvancedCalculator(fo);

                rslt = AdvExpression[i]-> exponential();
            }
            else if(oper==3) {
                cout << "Enter the n: ";
                cin >> fo;
                cout << "Enter r: ";
                cin >> so;
                AdvExpression[i] = new AdvancedCalculator(fo, so);

                rslt = AdvExpression[i]-> combination();
            }
            else if(oper==4) {
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
            if(ch=='y' || ch=='Y') {
                system("CLS");
            }
            
        } while(ch=='y' || ch=='Y');
        
    }

    // OPERATION HISTORY
    else if(choice==3) {
        ifstream readFile("SimpleData.txt",ios::binary);
        readFile.read(reinterpret_cast<char*>(&SimpleExpression[0]), sizeof(SimpleExpression[0]));

        cout << "first operand: "<<SimpleExpression[0]->getFirstOperand();
    }

}