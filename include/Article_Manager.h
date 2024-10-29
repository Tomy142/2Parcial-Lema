#ifndef ARTICLE_MANAGER_H
#define ARTICLE_MANAGER_H

#include <vector>
#include <memory>
#include <string>
#include "Article.h"

class ArticleManager
{
    private:
        vector<shared_ptr<Article>>articles;

    public:
        void addArticle(int code, string& name, double price);
        const vector<shared_ptr<Article>>& getArticles() const;
        shared_ptr<Article> getArticleByCode(int code)const;
};
#endif