#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee
{
    private:
        int code;
        string name;

    public:
        Employee(int code, string name);
        void setCode(int code);
        void setName(const string& name);

        int getCode();
        string getName();
};

#endif