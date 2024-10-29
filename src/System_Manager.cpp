#include <iostream>

#include "../include/System_Manager.h"

SystemManager::SystemManager(){}


void SystemManager:: UploadProvider()
{
    int code;
    string name;
    string address;

    cout<<"Ingrese el codigo del proveedor: ";
    cin>>code;
    cin.ignore();
    cout<<"Ingrese el nombre del proveedor: ";
    getline(cin, name);
    cout<<"Ingrese su direccion: ";
    getline(cin, address);
    providerManager.addProvider(code, name, address);
    cout<<"Proveedor cargado correctamente"<<endl;

}

void SystemManager::ListProvider()
{
    for(const auto& provider : providerManager.getProviders())
    {
        cout<<"Codigo: "<< provider->getCode()<<", Nombre: "<<provider->getName()<<", Direccion: "<<provider->getAddress()<<endl;
    }
}

void SystemManager::UploadArticle()
{
    int code;
    string name;
    double price;

    cout<<"Ingrese el codigo del articulo: ";
    cin>>code;
    cin.ignore();
    cout<<"Ingrese el nombre del articulo: ";
    getline(cin, name);
    cout<<"Ingrese precio del articulo: ";
    cin>> price;
    articleManager.addArticle(code, name, price);
    cout<<"Articulo cargado correctamente"<<endl;

}
void SystemManager::ListArticle()
{
    for(const auto& article : articleManager.getArticles())
    {
        cout<<"Codigo: "<<article->getCode()<<", Nombre: "<<article->getName()<<", Precio: "<<article->getPrice()<<endl;
    }

}
void SystemManager::UploadOrderToProvider()
{
    int orderCode, providerCode, articleCode, employeeCode;

    cout<<"Ingrese el codigo de la orden: ";
    cin>>orderCode;
    cin.ignore();
    cout<<"Ingrese el codigo del proveedor: ";
    cin>>providerCode;
    orderManager.addOrder(orderCode, providerCode, employeeCode);
    cout<<"Orden asignada al proveedor correctamente"<<endl;

    cout<<"Ingrese el codigo del articulo para agregar a la orden(0 para finalizar): "<<endl;
    cout<<"Codigo Ingresado: ";
    while(true){
        cin>>articleCode;

        if(articleCode == 0)break;

        auto article = articleManager.getArticleByCode(articleCode);

        if(article){
            orderManager.addArticleToOrder(orderCode, article);
            cout<<"Articulo cargado a la orden"<<endl;
            cout<<"Ingrese otro articulo: ";
        }
        else{
            cout<<"Articulo no encontrado";
        }
    }

}
void SystemManager::ListOrdersByProvider()
{
    cout<<"Listado de ordenes por proveedor"<<endl;

    for(const auto& provider : providerManager.getProviders())
    {
        cout<<"Proveedor: "<<provider->getName()<<endl;

        auto orders= orderManager.getOrdersByProvider(provider->getCode());

        if(orders.empty())
        {
            cout<<"No hay ordenes para ese proveedor"<<endl;
        }
        else
        {
            for (const auto&order : orders)
            {
                cout<<"   Orden: "<<order->getOrderCode()<<endl;
                for(const auto& employee :employeeManager.getEmployees())
                {
                    cout<<"Empleado: "<< employee->getName()<<endl;

                    for(const auto& article: order->getArticles())
                    {
                        cout<<"     Articulo: "<<article->getName()<<" Codigo: "<<article->getCode()<<", Precio: $"<<article->getPrice()<<endl;
                    }
                }
            }
        }
    }

}

void SystemManager:: UploadEmployee()
{
    int code;
    string name;
    
    cout<<"Ingrese el codigo del empleado: ";
    cin>>code;
    cin.ignore();
    cout<<"Ingrese el nombre del empleado: ";
    getline(cin, name);
    employeeManager.addEmployee(code, name);
    cout<<"Empleado cargado correctamente"<<endl;
}

void SystemManager::ListEmployee()
{
    for(const auto& employee : employeeManager.getEmployees())
    {
        cout<<"Codigo: "<< employee->getCode()<<", Nombre: "<<employee->getName()<<endl;
    }
}
