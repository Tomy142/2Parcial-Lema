#include "../include/Employee.h"

Employee::Employee(int code, string name): code(code), name(name){}

void Employee :: setCode(int code)
{
    this->code = code;
}

int Employee::getCode()
{
    return code;
}

void Employee::setName(const string& name)
{
    this->name = name;
}

string Employee::getName()
{
    return name;
}
