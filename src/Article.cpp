#include "../include/Article.h"

Article::Article(int code, string name, double price): code(code), name(name), price(price){};

void Article::setCode(int code)
{
    this-> code = code;
}

int Article ::getCode()
{
    return code;
}

void Article::setName(string& name)
{
    this-> name = name;
}

string Article::getName()
{
    return name;
}

void Article::setPrice(double price)
{
    this-> price = price;
}

double Article::getPrice()
{
    return price;
}