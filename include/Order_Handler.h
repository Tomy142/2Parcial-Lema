#ifndef ORDER_HANDLER_H
#define ORDER_HANDLER_H

#include <vector>
#include <memory>
#include "Order.h"

class OrderHandler
{
    private:
        vector<shared_ptr<Order>> orders;
    public:
        void addOrder(int orderCode, int providerCode, int employeeCode);
        void addArticleToOrder(int orderCode, const shared_ptr<Article>& article);

        const vector<shared_ptr<Order>>& getOrders()const;

        vector<shared_ptr<Order>> getOrdersByProvider(int providerCode)const;
        
};



#endif