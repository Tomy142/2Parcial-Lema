#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include <memory>
#include "Article.h"

class Order
{
    private:
        int orderCode;
        int providerCode;
        int employeeCode;
        vector<shared_ptr<Article>>articles;
    public:
        Order(int orderCode, int providerCode, int employeeCode);
        void addArticle(const shared_ptr<Article>& article);
        void setOrderCode(int orderCode);
        void setProviderCode(int providerCode);
        void setEmployeeCode(int employeeCode);
        

        int getOrderCode();
        int getProviderCode();
        int getEmployeeCode();
        const vector<shared_ptr<Article>>& getArticles()const;
};


#endif