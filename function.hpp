#pragma once

#include <iostream>

class function {
public:
    double cTof(double c) {
        double result = c * 9 / 5 + 32;
        return result;
    }

    double fToc(double f) {
        double result = (f - 32) * 5 / 9;
        return result;
    }

    void opt() {
        double c;
        double f;
        int intWhichFunction;
        bool WhichFunction = false;
        double result;
        char typex;

        std::cout << "Choose What Function you want by number (1 = C to F / 2 = F to C) : ";
        std::cin >> intWhichFunction;
        if (intWhichFunction == 1) {
            WhichFunction = true;
        }

        if (WhichFunction) {
            std::cout << "What is C : ";
            std::cin >> c;
            result = cTof(c);
            typex = 'F';
        }
        else {
            std::cout << "What is F : ";
            std::cin >> f;
            result = fToc(f);
            typex = 'C';
        }

        std::cout << "The Result is " << result << " " << typex << "\n";
    }

    void end() {
        std::cout << "Hope you liked the program\n";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin.get();
    }

    void work() {
        int againint;
        bool againbool = true;

        while (againbool) {
            opt();

            std::cout << "Do you want to do it again? (1 = Yes / 2 = No): ";
            std::cin >> againint;

            if (againint == 1) {
                againbool = true;
            }
            else if (againint == 2) {
                againbool = false;
            }
            else {
                std::cout << "Invalid input. Ending program.\n";
                againbool = false;
            }
        }

        end();
    }
};
