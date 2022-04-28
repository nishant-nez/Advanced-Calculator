#include<iostream>
#include<fstream>
#include<iomanip>
#include<conio.h>
#include"AdvancedCalculator.h"

using namespace std;

Calculator* SimpleExpression[50];
AdvancedCalculator* AdvExpression[50];

void menu() {
    cout << endl << setw(60) << "Welcome to Advanced Calculator!!!" << endl;  
    cout << "     -----------------------------------------------------------------------------     " << endl;
    cout << setw(45) << "MENU" << endl << endl;
    cout << setw(52) << "1) Simple Calculator" << endl;
    cout << setw(54) << "2) Advanced Calculator" << endl;
    cout << setw(52) << "3) Operation History" << endl;
    cout << setw(39) << "4) EXIT" << endl << endl << endl;
}

int main() {
    int choice;
    static int i;
    static int j;
    do {
        system("CLS");
        menu();
        cout<<endl;
        cin>>choice;
    
        if(choice!=1 && choice!=2 && choice!=3 && choice!=4) {
            do {
                cout << "Invalid Option Please try again! : ";
                cin >> choice;
            } while(choice!=1 && choice!=2 && choice!=3);
        }

        // SIMPLE CALCULATOR
        if(choice==1) {
            system("CLS");
            // static int i=0;
            double fo=0;
            double so=0;
            char ch;
            double rslt=0;
            char prev;
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
                    if(i!=0) {
                        cout << "Enter the second operand from the value of previous operation's result? (y/n): ";
                        cin >> prev;
                        if(prev=='y' || prev=='Y') {              
                            SimpleExpression[i] = new Calculator(fo, SimpleExpression[i-1]->getResult());
                        }
                        else {
                            cout << "Enter the second operand value: ";
                            cin >> so;
                            SimpleExpression[i] = new Calculator(fo, so);
                        }
                    }
                    else {
                        cout << "Enter the second operand value: ";
                        cin >> so;
                        SimpleExpression[i] = new Calculator(fo, so);
                    }
                    rslt = SimpleExpression[i]-> add();
                    SimpleExpression[i]-> setOperation("Addition");
                }
                else if(oper==2) {
                    cout << "Enter the first operand value: ";
                    cin >> fo;if(i!=0) {
                        cout << "Enter the second operand from the value of previous operation's result? (y/n): ";
                        cin >> prev;
                        if(prev=='y' || prev=='Y') {
                            SimpleExpression[i] = new Calculator(fo, SimpleExpression[i-1]->getResult());
                        }
                        else {
                            cout << "Enter the second operand value: ";
                            cin >> so;
                            SimpleExpression[i] = new Calculator(fo, so);
                        }
                    }
                    else {
                        cout << "Enter the second operand value: ";
                        cin >> so;
                        SimpleExpression[i] = new Calculator(fo, so);
                    }

                    rslt = SimpleExpression[i]-> sub();
                    SimpleExpression[i]-> setOperation("Subtraction");
                }
                else if(oper==3) {
                    cout << "Enter the first operand value: ";
                    cin >> fo;
                    if(i!=0) {
                        cout << "Enter the second operand from the value of previous operation's result? (y/n): ";
                        cin >> prev;
                        if(prev=='y' || prev=='Y') {
                            SimpleExpression[i] = new Calculator(fo, SimpleExpression[i-1]->getResult());
                        }
                        else {
                            cout << "Enter the second operand value: ";
                            cin >> so;
                            SimpleExpression[i] = new Calculator(fo, so);
                        }
                    }
                    else {
                        cout << "Enter the second operand value: ";
                        cin >> so;
                        SimpleExpression[i] = new Calculator(fo, so);
                    }

                    rslt = SimpleExpression[i]-> mul();
                    SimpleExpression[i]-> setOperation("Multiplication");
                }
                else if(oper==4) {
                    do{
                    cout << "Enter the first operand value: ";
                    cin >> fo;
                    if(i!=0) {
                        cout << "Enter the second operand from the value of previous operation's result? (y/n): ";
                        cin >> prev;
                        if(prev=='y' || prev=='Y') {
                            SimpleExpression[i] = new Calculator(fo, SimpleExpression[i-1]->getResult());
                            
                        }
                        else {
                            cout << "Enter the second operand value: ";
                            cin >> so;
                            SimpleExpression[i] = new Calculator(fo, so);
                        }

                        

                    }
                    else {
                        cout << "Enter the second operand value: ";
                        cin >> so;
                        SimpleExpression[i] = new Calculator(fo, so);
                    }

                        try{
                            if(so != 0)
                            {
                                 rslt = SimpleExpression[i]-> div();
                                SimpleExpression[i]-> setOperation("Division");
                            }

                            else{
                                throw(so);
                            }
                            }
                            catch(double so){
                                cout<<"Error!! Denominator 0 gives the value infinity."<<endl; 
                            cout<<"Please try with different numbers."<<endl;
                            }
                   
                    }while(so==0);
                }
                else if(oper==5) {

                    do{
                    
                    cout << "Enter the first operand value: ";
                    cin >> fo;
                    if(i!=0) {
                        cout << "Enter the second operand from the value of previous operation's result? (y/n): ";
                        cin >> prev;
                        if(prev=='y' || prev=='Y') {
                            SimpleExpression[i] = new Calculator(fo, SimpleExpression[i-1]->getResult());
                        }
                        else {
                            cout << "Enter the second operand value: ";
                            cin >> so;
                            SimpleExpression[i] = new Calculator(fo, so);
                        }
                    }
                    else {
                        cout << "Enter the second operand value: ";
                        cin >> so;
                        SimpleExpression[i] = new Calculator(fo, so);
                    }

                    try{
                            if(so != 0)
                            {
                               rslt = SimpleExpression[i]-> modulo();
                    SimpleExpression[i]-> setOperation("Modulos");
                            }

                            else{
                                throw(so);
                            }
                            }
                            catch(double so){
                                cout<<"Invalid Value."<<endl; 
                            cout<<"Please try with different numbers instead of 0."<<endl;
                            }

                    
                    }while(so == 0);
                    
                }

                // TRIGONOMETRIC
                else if(oper==6) {
                    cout << "Enter the value: ";
                    cin >> fo;
                    SimpleExpression[i] = new Calculator(fo);

                    rslt = SimpleExpression[i]->sinCalc();
                    SimpleExpression[i]-> setOperation("Sin");
                }
                else if(oper==7) {
                    cout << "Enter the value: ";
                    cin >> fo;
                    SimpleExpression[i] = new Calculator(fo);

                    rslt = SimpleExpression[i]-> cosCalc();
                    SimpleExpression[i]-> setOperation("Cos");
                }
                else if(oper==8) {
                    do{
                    cout << "Enter the value: ";
                    cin >> fo;

                    try{
                        if(fo != 90)
                        {
                             SimpleExpression[i] = new Calculator(fo);

                    rslt = SimpleExpression[i]-> tanCalc();
                    SimpleExpression[i]-> setOperation("Tan");
                        }

                        else{
                            throw(fo);
                        }
                    }
                    catch(double fo)
                    {
                        cout <<"Invalid value! Please enter a different value"<<endl;
                    }
                   
                    }while(fo == 90);
                }
                else if(oper==9) {
                    do{
                    cout << "Enter the value: ";
                    cin >> fo;
                     try{
                            if(fo != 0)
                            {
                    SimpleExpression[i] = new Calculator(fo);

                    rslt = SimpleExpression[i]-> cosecCalc();
                    SimpleExpression[i]-> setOperation("Cosec");
                            }

                            else{
                                throw(fo);
                            }
                        }

                        catch(double fo){
                        cout <<"Invalid value! Please enter a different value"<<endl;
                        }

                   
                    }while(fo == 0);
                }
                else if(oper==10) {
                    do{
                    cout << "Enter the value: ";
                    cin >> fo;
                    try{

                        if(fo != 90){
                   SimpleExpression[i] = new Calculator(fo);

                    rslt = SimpleExpression[i]-> secCalc();
                    SimpleExpression[i]-> setOperation("Sec");
                        }

                        else{
                            throw(fo);
                        }
                    }

                    catch(double fo){
                        cout<<" Invalid! Please enter a different value. "<<endl;
                    }

                    
                    }while(fo == 90);
                }
                else if(oper==11) {

                    do{
                    cout << "Enter the value: ";
                    cin >> fo;
                     try{
                    if(fo != 90){
                    SimpleExpression[i] = new Calculator(fo);

                    rslt = SimpleExpression[i]-> cotCalc();
                    SimpleExpression[i]-> setOperation("Cot");
                    }

                    else{
                        throw(fo);
                    }
                    }

                    catch(double fo){
                        cout<<" Invalid! Please enter a different value. "<<endl;
                    }
                    
                    }while(fo == 90);
                }

                // POWER
                else if(oper==12) {
                    do{
                    cout << "Enter the value: ";
                    cin >> fo;
                    try{
                            if(fo >= 0)
                            {
                    SimpleExpression[i] = new Calculator(fo);

                    rslt = SimpleExpression[i]-> squareRoot();
                    SimpleExpression[i]-> setOperation("Square Root");
                            }

                            else{
                                throw(fo);
                            }
                        }

                        catch(double fo){
                            cout<<"Error!! Please enter positive values for square root."<<endl;
                        }

                    
                    }while(fo <= 0);
                }
                else if(oper==13) {
                    cout << "Enter the value: ";
                    cin >> fo;
                    SimpleExpression[i] = new Calculator(fo);

                    rslt = SimpleExpression[i]-> cubeRoot();
                    SimpleExpression[i]-> setOperation("Cube Root");
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
            // static int j=0;
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
                    cout << "Enter the range (n): ";
                    cin >> fo;
                    AdvExpression[j] = new AdvancedCalculator(fo);

                    rslt = AdvExpression[j]-> fact();
                    AdvExpression[j]-> setOperation("Factorial");
                }
                else if(oper==2) {
                    cout << "Enter the value: ";
                    cin >> fo;
                    AdvExpression[j] = new AdvancedCalculator(fo);

                    rslt = AdvExpression[j]-> exponential();
                    AdvExpression[j]-> setOperation("Exponential");
                }
                else if(oper==3) {
                    cout << "Enter the n: ";
                    cin >> fo;
                    cout << "Enter r: ";
                    cin >> so;
                    AdvExpression[j] = new AdvancedCalculator(fo, so);

                    rslt = AdvExpression[j]-> combination();
                    AdvExpression[j]-> setOperation("Combination");
                }
                else if(oper==4) {
                    cout << "Enter the n: ";
                    cin >> fo;
                    cout << "Enter r: ";
                    cin >> so;
                    AdvExpression[j] = new AdvancedCalculator(fo, so);

                    rslt = AdvExpression[j]-> permutation();
                    AdvExpression[j]-> setOperation("Permutation");
                }
                else {
                    cout << endl << "Invalid Operator!";
                }

                cout << "Result : " << rslt;
                AdvExpression[j] -> setResult(rslt);
                ofstream writeData("AdvData.txt", ios::binary);
                writeData.write(reinterpret_cast<char*>(&AdvExpression[j]), sizeof(AdvExpression[j]));

                j++;
                cout << endl << "Calculate again? (y/n) ";
                cin >> ch;
                if(ch=='y' || ch=='Y') {
                    system("CLS");
                }
                
            } while(ch=='y' || ch=='Y');
            
        }

        // OPERATION HISTORY
        else {
            char temp;
            system("CLS");

            // CODE FOR FILE READ, DISPLAY

            //
        }
    } while(choice!=4);
    
}