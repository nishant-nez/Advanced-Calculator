#include<iostream>
#include"Calculator.h"

using namespace std;


class AdvancedCalculator: public Calculator {

    public:
        AdvancedCalculator() {}
        AdvancedCalculator(double fo, double so):Calculator(fo, so) {}
        AdvancedCalculator(double fo):Calculator(fo) {}

        // CALCULATOR FUNCTIONS
        int fact() {
            int temp=1;
            for(int i=1; i<=int(firstOperand); i++) {
                temp *= i;
            }
            return temp;
        }
        // OVERLOADED FOR COMBINATION
        int fact(int fo) {
            int temp=1;
            for(int i=1; i<=int(fo); i++) {
                temp *= i;
            }
            return temp;
        }

        double exponential() {
            return exp(firstOperand);
        }

        double combination() {
            return fact(firstOperand) / (fact(secondOperand) * fact(firstOperand - secondOperand));
        }

        double permutation() {
            return fact(firstOperand) / fact(firstOperand - secondOperand);
        }

        
};