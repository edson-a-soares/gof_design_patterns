#include <iostream>

#include "Composite/Number.h"

#include "Composite/Add.h"
#include "Composite/Subtract.h"
#include "Composite/Multiply.h"
#include "Composite/Divide.h"

using GoF::Composite::Number;
using GoF::Composite::Expression;

using GoF::Composite::Add;
using GoF::Composite::Subtract;
using GoF::Composite::Multiply;
using GoF::Composite::Divide;

int main(int argc, char * argv[]) {

    Expression * addition = new Add(new Number(5), new Number(5));
    std::cout << "\n(5 + 5) = ";
    std::cout << addition->calculate() << std::endl;

    Expression * subtraction = new Subtract(new Number(100), new Number(50));
    std::cout << "(100 - 50) = ";
    std::cout << subtraction->calculate() << std::endl;

    Expression * multiplication = new Multiply(new Number(10), new Number(10));
    std::cout << "(10 * 10) = ";
    std::cout << multiplication->calculate() << std::endl;

    Expression * division = new Divide(new Number(500), new Number(25));
    std::cout << "(500 - 25) = ";
    std::cout << division->calculate() << std::endl;

    Expression * composedMultiplication = new Multiply(addition, multiplication);
    std::cout << "[(5 + 5) * (10 * 10)] = ";
    std::cout << composedMultiplication->calculate() << std::endl;

    Expression * composedDivision = new Divide(composedMultiplication, new Number(5));
    std::cout << "[ ((5 + 5) * (10 * 10)) / 5 ] = ";
    std::cout << composedDivision->calculate() << std::endl;


    delete composedDivision;

    return 0;

}
