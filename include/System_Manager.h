#ifndef SYSTEM_MANAGER_H
#define SYSTEM_MANAGER_H

#include "../include/Provider_Manager.h"
#include "../include/Article_Manager.h"
#include "../include/Order_Handler.h"
#include "../include/Employee_Manager.h"

class SystemManager
{
    private:
        ProviderManager providerManager;
        ArticleManager articleManager;
        OrderHandler orderManager;
        EmployeeManager employeeManager;
    
    public:
        SystemManager();
        void UploadProvider();
        void ListProvider();
        void UploadArticle();
        void ListArticle();
        void UploadOrderToProvider();
        void ListOrdersByProvider();
        void UploadEmployee();
        void ListEmployee();

};

#endif