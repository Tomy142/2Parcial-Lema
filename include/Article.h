#ifndef ARTICLE_H
#define ARTICLE_H

#include <iostream>
#include <string>

using namespace std;

class Article
{
    private:    
        int code;
        string name;
        double price;

    public:
        Article(int code, string name, double price);
        void setCode(int code);
        void setName(string& name);
        void setPrice(double price);

        int getCode();
        string getName();
        double getPrice();

};

#endif