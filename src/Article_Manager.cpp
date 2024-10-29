#include "../include/Article_Manager.h"

void ArticleManager::addArticle(int code, string& name, double price)
{
    articles.push_back(make_shared<Article>(code, name, price));
}

const vector<shared_ptr<Article>>& ArticleManager::getArticles()const
{
    return articles;
}

shared_ptr<Article>ArticleManager:: getArticleByCode(int code)const
{
    for(const auto& article : articles)
    {
        if(article->getCode() == code)
        {
            return article;
        }
    }
    return nullptr;
}