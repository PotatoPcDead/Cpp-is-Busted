#include <iostream>


int main(){
    char Operator;
    int Num1;
    int Num2;
    int Result = 0;
    std::cout << "Please enter any operator =   ";
    std::cin >> Operator;
    std::cout << "Number 1 =   ";
    std::cin >> Num1;
    std::cout << "Number 2 =   ";
    std::cin >> Num2;
    switch (Operator)
    {
    case '*':
        Result = Num1 * Num2;
        break;

    case '/':
        Result = Num1 / Num2;
        break;

    case '+':
        Result = Num1 + Num2;
        break;

    case '-':
        Result = Num1- Num2;
        break;

    default:
        std::cout << "Please enter an operator      ";
        break;
    }
    std::cout << "Result = " << Result;
    return 0;
}