#include <iostream>
#include <string>
#include <limits>

using namespace std;

/// <summary>
/// Takes in two values and allows for simple addition, subtraction, multiplication and division of thoes two values.
/// </summary>
class Calculator
{

    private:

        char opperator;

        float firstValue;
        float secondValue;

        void CatchInputFail()
        {
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Input failed try again \n";
                Calculate();
            }
        }

        // Evaluates the inputed values and applies the appropriate oprations.
        float EvaluateOperation()
        {
            switch (opperator) {
            case '+':
                return firstValue + secondValue;

            case '-':
                return firstValue - secondValue;

                // Checks multiple forms of input
            case '*' || 'x' || 'X':
                return firstValue * secondValue;

            case '/':
                return firstValue / secondValue;

            default:
                cout << "Opperator not available ";
            }

        }

    public:

        // Takes in values and outputs the result
        void Calculate()
        {
            cout << "Input your first value : ";
            cin >> firstValue;
            CatchInputFail();

            cout << "input your opporator : ";
            cin >> opperator;
            CatchInputFail();

            cout << "input your second value : ";
            cin >> secondValue;
            CatchInputFail();

            cout << "Your answer is : " << EvaluateOperation();

        }

};


// Runs the code
int main()
{

    // Creates an instance of the calculator and initiates the calculation process
    Calculator calculator;
    calculator.Calculate();

    return 0;
}



