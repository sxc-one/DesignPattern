#include <iostream>
#include "include\Operation.h"

int main(){
    float number1 = 0;
    float number2 = 0;
    char operate = ' ';
    double result = 0; 

    std::cout << "Please input first number:" << std::endl;
    std::cin >> number1;
    std::cout << "Please input operator:" << std::endl;
    std::cin >> operate;
    std::cout << "Please input second number:" << std::endl;
    std::cin >> number2;

    // switch (operate){
    //     case '+':
    //         result = number1 + number2;
    //         break;
        
    //     case '-':
    //         result = number1 - number2;
    //         break;
        
    //     case '*':
    //         result = number1 * number2;
    //         break;
        
    //     case '/':
    //         result = number1 / number2;
    //         break;
    
    //     default:
    //         break;
    // }
    Operation* oper = OperateFactory::createOperation(operate);
	oper->setNumber1(number1);
    oper->setNumber2(number2);
    result = oper->getResult();
    std::cout << "Result is: " << result << std::endl;

    return 0;
}
