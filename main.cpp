#include "Veiculo.hpp"
int main(int argc, char **argv)
{
    string texto;
    float valor;
    int numero;
    Veiculo veiculo;
    /*cout << "informe a marca do veículo" << endl;
    cin >> texto;
    veiculo.setMarca(texto);
    cout <<"informe o modelo do veículo"<< endl;
    cin >> texto;
    veiculo.setModelo(texto);
    cout << "informe o valor do veículo" << endl;
    cin >> valor;
    veiculo.setPreco(valor);
    cout << "dados do veículo" << endl;
    cout << veiculo.getMarca() << " - ";
    cout << veiculo.getModelo() << " - ";
    cout << veiculo.getPreco() << endl<<endl;
*/


    Carro *carro;
    carro = new Carro();
    cout << "informe a marca do Carro"<< endl;
    cin >> texto;
    carro->setMarca(texto);
    cout << "informe o modelo do Carro"<< endl;
    cin >> texto;
    carro->setModelo(texto);
    cout << "informe o Preço do Carro"<< endl;
    cin >> valor;
    carro->setPreco(valor);
    cout << "informe o tipo do cambio do Carro"<< endl;
    cin >> numero;
    carro->setTC(numero);
    cout << "informe a numeros de assentos do Carro"<< endl;
    cin >> numero;
    carro->setNA(numero);
    cout<< "Dados do carro"<< endl;
    cout<<carro->getMarca()<<" - " << endl;
    cout<<carro->getModelo()<<" - " << endl;
    cout<<carro->getPreco()<<" - " << endl;
    cout<<carro->getTC()<<" - " << endl;
    cout<<carro->getNA()<<" - " << endl<<endl;
};

