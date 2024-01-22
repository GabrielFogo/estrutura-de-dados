#include <iostream>
#include "pilha.h"

using namespace std;

int main()
{
    Pilha pilha;
    TipoItem item;
    short opcao;

    cout << "Programa para gerar pilhas\n";

    do
    {
        cout << "Digite 0 para sair\n";
        cout << "Digite 1 para adicionar um item\n";
        cout <<  "Digite 2 para remover um item\n";
        cout << "Digite 3 para ver a pilha\n";        
        cin >> opcao;

        switch (opcao)
        {
            case 1:
                cout << "Digite o valor do item:";
                cin >> item;
                pilha.Inserir(item);
                break;
            case 2:
                item = pilha.Remover();
                cout << "elemento removido:" << item << endl;
                break;
            case 3:
                pilha.Imprimir();
                break;
            default:
                cout << "opcao invalida";
        }

    } while (opcao != 0);
    
}
