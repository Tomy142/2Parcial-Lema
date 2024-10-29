#ifndef EMPLOYEE_MANAGER_H
#define EMPLOYEE_MANAGER_H

#include <memory>
#include <vector>
#include "Employee.h"

class EmployeeManager
{
    private:
        vector<shared_ptr<Employee>>employees;

    public:
        void addEmployee(int code, const string& name);

        const vector <shared_ptr<Employee>>& getEmployees()const;
};

#endif