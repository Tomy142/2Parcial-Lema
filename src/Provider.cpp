#include "../include/Provider.h"

Provider::Provider(int code, string name, string address): code(code), name(name), address(address){}

void Provider::setCode(int code)
{
    this->code = code;
}

int Provider::getCode()
{
    return code;
}

void Provider::setName(const string& name)
{
    this->name = name;
}

string Provider::getName()
{
    return name;
}

void Provider::setAddress( const string& address)
{
    this->address = address;
}

string Provider::getAddress()
{
    return address;
}