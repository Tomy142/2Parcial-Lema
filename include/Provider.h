#ifndef PROVIDER_H
#define PROVIDER_H

#include <iostream>
using namespace std;

class Provider
{
    private:
        int code;
        string name;
        string address;

    public:
        Provider(int code, string name, string address);
        void setCode(int code);
        void setName(const string& name);
        void setAddress(const string& address);

        int getCode();
        string getName();
        string getAddress();
};

#endif