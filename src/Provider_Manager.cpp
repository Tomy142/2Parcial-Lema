#include "../include/Provider_Manager.h"

void ProviderManager::addProvider(int code, const string& name,const string& address)
{
    auto provider = make_shared<Provider>(code, name, address);
    providers.push_back(make_shared<Provider>(code, name, address));
}

const vector<shared_ptr<Provider>>& ProviderManager::getProviders() const
{
    return providers;
}


