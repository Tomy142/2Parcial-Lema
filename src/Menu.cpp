#include <iostream>

#include "../include/Menu.h"
#include "../include/System_Manager.h"


void showMenu()
{
    
    cout<<"Bienvenido"<<endl;                                                    
    LINEBREAK;
    cout<<"Ingrese una operacion a realizar"<<endl;
    cout<<"1. Cargar proveedor"<<endl;
    cout<<"2. Listar proveedores"<<endl;
    cout<<"3. Cargar un articulo"<<endl;
    cout<<"4. Listar articulos"<<endl;
    cout<<"5. Cargar orden al proveedor"<<endl;
    cout<<"6. Listar ordenes por proveedor"<<endl;
    cout<<"7. Cargar empleados"<<endl;
    cout<<"8. Listar empleados"<<endl;
    cout<<"9. Salir"<<endl;

}

void Menu()
{
    SystemManager systemManager;
    int option;

    do
    {
        showMenu();

        cout<<"Su opcion: ";
        cin>>option;
        cin.ignore();
        switch(option)
        {
            case 1:{
                systemManager.UploadProvider();
                system("pause");
                system("cls");
                break;
            }

            case 2:{
                systemManager.ListProvider();
                system("pause");
                system("cls");
                break;
            }

            case 3:{
                systemManager.UploadArticle();
                system("pause");
                system("cls");
                break;
            }

            case 4:{
                systemManager.ListArticle();
                system("pause");
                system("cls");
                break;
            }

            case 5:{
                systemManager.UploadOrderToProvider();
                system("pause");
                system("cls");
                break;
            } 

            case 6:{
                systemManager.ListOrdersByProvider();
                system("pause");
                system("cls");
                break;
            }

            case 7:{
                systemManager.UploadEmployee();
                system("pause");
                system("cls");
                break;
            }

            case 8:{
                systemManager.ListEmployee();
                system("pause");
                system("cls");
                break;
            }

            case 9:{
                cout<<"Saliendo..."<<endl;
                system("pause");
                system("cls");
                break;
            }
            

            default:
                cout<<"Opcion no valida"<<endl;
                break;
        }
    }while(option!=9);
}
