#include "../include/Order_Handler.h"

void OrderHandler::addOrder(int orderCode, int providerCode, int employeeCode)
{
    orders.push_back(make_shared<Order>(orderCode,providerCode,employeeCode));
}

void OrderHandler::addArticleToOrder(int orderCode, const shared_ptr<Article>& article)
{
    for(auto& order : orders)
    {
        if (order->getOrderCode() == orderCode)
        {
            order->addArticle(article);

            return;
        }
    }
}

const vector<shared_ptr<Order>>& OrderHandler::getOrders()const
{
    return orders;
}

vector<shared_ptr<Order>>OrderHandler:: getOrdersByProvider(int providerCode)const
{
    vector<shared_ptr<Order>> result;
    for(const auto& order : orders)
    {
        if (order->getProviderCode() == providerCode)
        {
            result.push_back(order);
        }
    }
    return result;
}