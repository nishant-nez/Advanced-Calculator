#include<cmath>
#include<iostream>
using namespace std;

class Calculator{
    protected:
        double firstOperand;
        // string opr;
        double secondOperand;
        double result;

    public:
        Calculator() {}
        Calculator(double fo, double so):firstOperand(fo), secondOperand(so) {}
        Calculator(double fo):firstOperand(fo) {}

        // GETTERS SETTERS
        void setFirstOperand(double fo) {
            firstOperand=fo;
        }
        void setSecondOperand(double so) {
            secondOperand=so;
        }
        void setResult(double rlt) {
            result=rlt;
        }

        double getFirstOperand() {
            return firstOperand;
        }
        double getSecondOperand() {
            return secondOperand;
        }
        double getResult() {
            return result;
        }

        // BASIC ARITHMETIC FUNCTIONS
        double add() {
            return firstOperand+secondOperand;
        }

        double sub() {
            return firstOperand-secondOperand;
        }

        double mul() {
            return firstOperand*secondOperand;
        }

        double div() {
            return firstOperand/secondOperand;
        }

        double modulo() {
            return int(firstOperand) % int(secondOperand);
        }

        //TRIGONOMETRIC
        double sinCalc() {
            return sin(firstOperand);
        }

        double cosCalc() {
            return cos(firstOperand);
        }

        double tanCalc() {
            return tan(firstOperand);
        }

        double cosecCalc() {
            return 1/(sin(firstOperand));
        }

        double secCalc() {
            return 1/(cos(firstOperand));
        }

        double cotCalc() {
            return 1/(tan(firstOperand));
        }

        // POWER
        double squareRoot() {
            return sqrt(firstOperand);
        }

        double cubeRoot() {
            return pow(firstOperand, 1.0/3.0);
        }
    
};