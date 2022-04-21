#include"Calculator.h"
#include<iostream>
using namespace std;


class AdvancedCalculator:Calculator {
    private:
        double firstOperand;
        // string opr;
        double secondOperand;
        double result;

    public:
        AdvancedCalculator() {}
        AdvancedCalculator(double fo, double so):firstOperand(fo), secondOperand(so) {}
        AdvancedCalculator(double fo):firstOperand(fo) {}

        void setResult(double rlt) {
            result=rlt;
        }
        double getResult() {
            return result;
        }

        int fact() {
            int temp=1;
            for(int i=1; i<=int(firstOperand); i++) {
                temp *= i;
            }
            return temp;
        }

        double exponential() {
            return exp(firstOperand);
        }
};