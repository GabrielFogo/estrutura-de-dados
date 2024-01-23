#include <iostream>
#include "fila.h"

using namespace std;

int main()
{
    Fila fila;
    TipoItem item;
    short opcao;

    cout << "Programa para gerar filas\n";

    do
    {
        cout << "Digite 0 para sair\n";
        cout << "Digite 1 para adicionar um item\n";
        cout <<  "Digite 2 para remover um item\n";
        cout << "Digite 3 para ver a fila\n";        
        cin >> opcao;

        switch (opcao)
        {
            case 1:
                cout << "Digite o valor do item:";
                cin >> item;
                fila.Inserir(item);
                break;
            case 2:
                item = fila.Remover();
                cout << "elemento removido:" << item << endl;
                break;
            case 3:
                fila.Imprimir();
                break;
            default:
                cout << "opcao invalida";
        }

    } while (opcao != 0);
    
}
