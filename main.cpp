#include<iostream>

int main(){

    int opcaoPagamento;
    int qtdParafusos, qtdPorca, qtdArruela, qtdAbrasadeira, qtdChaveFenda, qtdChavePhilips;
    float valorParafuso = 0.50, valorPorca = 0.30, valorArruela = 0.20, valorAbrasadeira = 1.00, valorChaveFenda = 2.00, valorChavePhilips = 2.50;
    float  valorTotalParafuso, valorTotalPorca, valorTotalArruela, valorTotalAbrasadeira, valorTotalChaveFenda, valorTotalChavePhilips;
    float juros = 1.20;
    float desconto = 0.80;
    float valorTotalCompra, valorFinalCompra;
    float qtdTotalprodutos;

    std::cout<< "Digite a quantidade de parafusos: "<<std::endl;
    std::cin>> qtdParafusos;
    std::cout<< "Digite a quantidade de porcas: "<<std::endl;
    std::cin>> qtdPorca;
    std::cout<< "Digite a quantidade de arruelas: "<<std::endl;
    std::cin>> qtdArruela;
    std::cout<< "Digite a quantidade de abrasadeiras: "<<std::endl;
    std::cin>> qtdAbrasadeira;
    std::cout<< "Digite a quantidade de chaves de fenda: "<<std::endl;
    std::cin>> qtdChaveFenda;
    std::cout<< "Digite a quantidade de chaves de philips: "<<std::endl;
    std::cin>> qtdChavePhilips;

    int produtosComprados[6] = {qtdParafusos, qtdPorca, qtdArruela, qtdAbrasadeira, qtdChaveFenda, qtdChavePhilips};

    for(int i = 0; i < 6; i++){
        std::cout<<"\nProdutos comprados: "<<produtosComprados[i]<<std::endl;
    }

    std::cout<<"\n\nQuantidade total dos produtos: "<<qtdParafusos + qtdPorca + qtdArruela + qtdAbrasadeira + qtdChaveFenda + qtdChavePhilips<<std::endl;
    

    valorTotalParafuso = qtdParafusos * valorParafuso;
    valorTotalPorca = qtdPorca * valorPorca;
    valorTotalArruela = qtdArruela * valorArruela;
    valorTotalAbrasadeira = qtdAbrasadeira * valorAbrasadeira;
    valorTotalChaveFenda = qtdChaveFenda * valorChaveFenda;
    valorTotalChavePhilips = qtdChavePhilips * valorChavePhilips;

    valorTotalCompra = valorTotalParafuso + valorTotalPorca + valorTotalArruela + valorTotalAbrasadeira + valorTotalChaveFenda + valorTotalChavePhilips;

    std::cout<<"\nValor total da compra: "<<valorTotalCompra<<std::endl;

    std::cout<<"\nQual sera a forma de pagamento? "<<std::endl;
    std::cout<<"1 === dinheiro ==="<<std::endl;
    std::cout<<"2 === cartao ==="<<std::endl;
    std::cout<<"3 === pix ===\n"<<std::endl;
    std::cin>> opcaoPagamento;

    if(opcaoPagamento == 1){
        valorFinalCompra = valorTotalCompra * desconto;
        std::cout<<"\nValor final da compra e: "<<valorFinalCompra<<std::endl;
    }else if(opcaoPagamento == 2){
        valorFinalCompra = valorTotalCompra * juros;
        std::cout<<"\nValor final da compra e: "<<valorFinalCompra<<std::endl;
    } else if(opcaoPagamento == 3){
        valorFinalCompra = valorTotalCompra;
        std::cout<<"\nValor final da compra e: "<<valorFinalCompra<<std::endl;
    }else{
        std::cout<<"\nOpcao de pagamento invalida!"<<std::endl;
    }

    std::cout<<"\nObrigado pela preferencia!!"<<std::endl;




     return 0;
}