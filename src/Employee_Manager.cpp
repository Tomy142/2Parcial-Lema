#include "../include/Employee_Manager.h"

void EmployeeManager::addEmployee(int code, const string& name)
{
    auto employee=make_shared<Employee>(code, name);
    employees.push_back(make_shared<Employee>(code,name));
}

const vector<shared_ptr<Employee>>& EmployeeManager::getEmployees() const
{
    return employees;
}