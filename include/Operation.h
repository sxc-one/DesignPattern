#ifndef __OPERATION_H__
#define __OPERATION_H__

class Operation {
public:
    // get and set number1
    double getNumber1(){
        return number1;
    }

    void setNumber1(double num){
        number1 = num;
    }

    // get and set number1
    double getNumber2(){
        return number2;
    }

    void setNumber2(double num){
        number2 = num;
    }

    // get result
    virtual double getResult(){
        double result = 0;

        return result;
    } 

private:
    double number1;
    double number2;

};
class OperationAdd : public Operation {
public:
    double getResult() override{
        double result = 0;

        result = getNumber1() + getNumber2();

        return result;
    }
private:
};

class OperationMinus : public Operation {
public:
    double getResult() override{
        double result = 0;

        result = getNumber1() - getNumber2();

        return result;
    }
private:
};

class OperateFactory {
public:
    static Operation* createOperation(char operate){
        Operation* op = nullptr;

        switch (operate){
            case '+':
                op = new OperationAdd();
                break;
        
            case '-':
                op = new OperationMinus();
                break;
    
            default:
                break;
        }

        return op;
    }
};

#endif