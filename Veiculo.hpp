#include <iostream>
#include <string.h>
using namespace std;

class Veiculo
{
    protected:
        string marca,modelo;
        float preco;

    private:
        int teste;

    public:

        Veiculo()
        {//construtor
            marca="";
            modelo="";
            preco=0.0;
        };
        ~Veiculo()
        {//destrutor
            cout <<"Deletando a instância"<< endl;
        };

        string getMarca()
        {
            return marca;
        };
        void setMarca(string mc)
        {
            marca = mc;
        };
        string getModelo()
        {
            return modelo;
        };
        void setModelo(string md)
        {
            modelo = md;
        };
        float getPreco()
        {
            return preco;
        };
        void setPreco(float pc)
        {
            preco = pc;
        };
        int getTeste()
        {
            return teste;
        };
        void setTeste(int t)
        {
            teste = t;
        };
        bool andarVeiculo(int velocidade)
        {
            return true;
        };

};
class Carro: public Veiculo
    {
        private:
            int tipoCambio, nAssentos;

        public:
            Carro()
            {

            }
            Carro(string mc, string md, float pc, int tc, int na)
            {
                marca = mc;
                modelo = md;
                preco = pc;
                tipoCambio = tc;
                nAssentos = na;
            }
            ~Carro()
            {

            }
            int getTC()
            {
                return tipoCambio;
            }
            void setTC(int tc)
            {
                tipoCambio = tc;
            }
            int getNA()
            {
                return nAssentos;
            }
            void setNA(int ns)
            {
                nAssentos = ns;
            }
    };



