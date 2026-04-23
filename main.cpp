#include<iostream>

int main(){

    int quantidadeAlunos;
    float nota1;
    float nota2;
    float nota3;
    float media;

         std::cout<<"\nBoa noite orientador\n"<<std::endl;

    int repetir;

    do{
        std::cout<<"Qual a quantidade de alunos que calculara a media? "<<std::endl;
        std::cin>>quantidadeAlunos;
    }while(quantidadeAlunos <= 0 );

    for(int i = 0; i <quantidadeAlunos; i++){
        std::cout<<"\nDigite a primeira nota do aluno "<<i+1<<": "<<std::endl;
        std::cin>>nota1;
        std::cout<<"\nDigite a segunda nota do aluno "<<i+1<<": "<<std::endl;
        std::cin>>nota2;
        std::cout<<"\nDigite a terceira nota do aluno "<<i+1<<": "<<std::endl;
        std::cin>>nota3;
        
        media = (nota1 + nota2 + nota3) / 3;
        
        std::cout<<"\nA media do aluno "<<i+1<<" e: "<<media<<std::endl;
    }

    if (media >= 7){
        std::cout<<"\nO aluno esta aprovado com media: "<<media<<std::endl;

    }else if(media >= 5 && media < 7){
        std::cout<<"\n O aluno esta de recuperacao com media: "<<media<<std::endl;
    
    }else{(media < 4.99);
        std::cout<<"\n O aluno esta reprovado com media: "<<media<<std::endl;
    }
    
    int opcao = 0;

    while (opcao != 1 && opcao != 2){
        std::cout<<"\nDeseja calcular a media de outros alunos? (1 - sim / 2 - nao)"<<std::endl;
        std::cin>>opcao;

    if (opcao == 1){
       main();
    
    }else if (opcao == 2){
        std::cout<<"\nObrigado por usar o programa, ate o proximo trimestre!!"<<std::endl;

    }else{
        std::cout<<"\nOpcao invalida, por favor escolha opcao 1 para sim ou opcao 2 para nao."<<std::endl;
    }

    }

       

  

     return 0;
}