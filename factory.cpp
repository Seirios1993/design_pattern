#include "factory.h"

double Operation::get_numA()
{
    return numberA;
}
double Operation::get_numB()
{
    return numberB;
}
void Operation::set_numA(double value)
{
    numberA = value;
}
void Operation::set_numB(double value)
{
    numberB = value;
}
double Operation::GetReasult()
{
    double result=0;
    return result;
}
double OperationAdd::GetReasult()
{
    double result=0;
    result = get_numA()+get_numB();
    return result;
}
double OperationSub::GetReasult()
{
    double result=0;
    result = get_numA()-get_numB();
    return result;
}
double OperationMul::GetReasult()
{
    double result=0;
    result = get_numA()*get_numB();
    return result;
}
double OperationDiv::GetReasult()
{
    double result=0;
    if(get_numB()==0)
        throw get_numB();
    result = get_numA()/get_numB();
    return result;
}

Operation* OperationFactory::creatOperate(char a)
{
    Operation *oper = nullptr;
    switch (a)
    {
        case '+':
            oper = new OperationAdd();
            break;
        case '-':
            oper = new OperationSub();
            break;
        case '*':
            oper = new OperationMul();
            break;
        case '/':
            oper = new OperationDiv();
            break;
    }
    return oper;
}