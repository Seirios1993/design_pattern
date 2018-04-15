

#ifndef FACTORY_H
#define FACTORY_H


class Operation
{
private:
    double numberA = 0;
    double numberB = 0;
public:
    double get_numA();
    double get_numB();
    void set_numA(double value);
    void set_numB(double value);
    virtual double GetReasult();
};

class OperationAdd:public Operation
{
public:
    double GetReasult();
};

class OperationSub:public Operation
{
public:
    double GetReasult();
};

class OperationMul:public Operation
{
public:
    double GetReasult();
};

class OperationDiv:public Operation
{
public:
    double GetReasult();
};

class OperationFactory
{
public:
    static Operation* creatOperate(char a);
};





#endif //DESIGN_PATTERN_FACTORY_H
