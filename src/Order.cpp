#include "../include/Order.h"

Order::Order(int orderCode, int providerCode, int employeeCode): orderCode(orderCode), providerCode(providerCode), employeeCode(employeeCode){}

void Order::addArticle(const shared_ptr<Article>& article)
{
    articles.push_back(article);
}

void Order::setOrderCode(int orderCode)
{
    this-> orderCode = orderCode;
}

int Order::getOrderCode()
{
    return orderCode;
}

void Order::setProviderCode(int providerCode)
{
    this-> providerCode = providerCode;
}

int Order::getProviderCode()
{
    return providerCode;
}

void Order::setEmployeeCode(int employeeCode)
{
    this-> employeeCode = employeeCode;
}

int Order::getEmployeeCode()
{
    return employeeCode;
}

const vector<shared_ptr<Article>>& Order::getArticles()const
{
    return articles;
}