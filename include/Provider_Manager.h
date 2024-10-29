#ifndef PROVIDER_MANAGER_H
#define PROVIDER_MANAGER_H

#include <memory>
#include <vector>
#include "Provider.h"

class  ProviderManager
{
    private:
        vector<shared_ptr<Provider>>providers;

    public:

        void addProvider(int code, const string& name,const string& address);

        const vector<shared_ptr<Provider>>& getProviders() const;

};

#endif