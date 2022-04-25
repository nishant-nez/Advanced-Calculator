#include<iostream>
#include"Calculator.h"
// #include"graphPlot/pbPlots.hpp"
// #include"graphPlot/supportLib.hpp"
using namespace std;


class AdvancedCalculator:Calculator {
    private:
        // double firstOperand;
        // string opr;
        // double secondOperand;
        double result;

    public:
        AdvancedCalculator() {}
        AdvancedCalculator(double fo, double so):Calculator(fo, so) {}
        AdvancedCalculator(double fo):Calculator(fo) {}

        void setResult(double rlt) {
            result=rlt;
        }
        double getResult() {
            return result;
        }

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
            return fact(firstOperand) / fact(secondOperand);
        }

        void graph(double xvals[], double yvals[]) {
            // RGBABitmapImageReference *imageRef = CreateRGBABitmapImageReference();

            // vector<double> x{xvals[0], xvals[1], xvals[2], xvals[3], xvals[4]};
            // vector<double> y{yvals[0], yvals[1], yvals[2], yvals[3], yvals[4]};

            // DrawScatterPlot(imageRef, 600, 400, &x, &y);

            // vector<double> *pngData = ConvertToPNG(imageRef -> image);
            // WriteToFile(pngData, "plot.png");
            // DeleteImage();
        }
};