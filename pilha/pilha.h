// Define as classes 

typedef int TipoItem;
const int max_itens = 100;

class Pilha
{
    private:
    int Tamanho;
    TipoItem* Estrutura;

    public:
    Pilha();
    ~Pilha();
    bool EstaCheia();
    bool EstaFazia();
    void Inserir(TipoItem item);
    TipoItem Remover();
    void imprimir();
    int QualTamanho();
};

