
#include <iostream>
#include <format>

using namespace std;

char opperator;

float firstValue;
float secondValue;


float EvaluateOperation()
{
    switch (opperator) {
    case '+':
        return firstValue + secondValue;
       
    case '-':
        return firstValue - secondValue;
        
    case '*' || 'x' || 'X':
        return firstValue * secondValue;
    default:
        cout << "Opperator not available ";
    }

}

int main()
{

   
    cout << "Input your first value : ";
    cin >> firstValue;

    cout << "input your opporator : ";
    cin >> opperator;

    cout << "input your second value : ";
    cin >> secondValue;



    cout << "Your answer is : " << EvaluateOperation();

    return 0;
}



