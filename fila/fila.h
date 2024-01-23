typedef int TipoItem;
const int max_itens = 100;

class Fila
{
    private:
    int Primeiro, Ultimo;
    TipoItem* Estrutura;

    public:
    Fila();
    ~Fila();
    bool EstaCheia();
    bool EstaVazia();
    void Inserir(TipoItem item);
    TipoItem Remover();
    void Imprimir();
    int QualTamanho();
};

