#include <iostream>
#include "factory.h"

void factory_client(void);

int main() {
    std::cout << "Hello, World!" << std::endl;
    factory_client();
    return 0;
}

void factory_client(void)
{
    Operation*oper = OperationFactory::creatOperate('+');
    oper->set_numA(1);
    oper->set_numB(2);
    double result = oper->GetReasult();
    std::cout<<result;
}