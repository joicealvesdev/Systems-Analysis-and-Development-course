
/*Manipulção de dados em structs Struct*/


#include <stdio.h>
#include <string.h>

struct Aluno {
    int numMat;
    char nome[30];
    char sexo;
    int idade;
};

int main(){
    struct Aluno aluno1;

    // Inserindo dados no aluno1
    aluno1.numMat = 1000;
    strcpy(aluno1.nome, "Joao");
    aluno1.sexo = 'M';
    aluno1.idade = 19;

    // Imprimindo os dados do aluno1
    printf("Número de matrícula: %d\n", aluno1.numMat);
    printf("Nome: %s\n", aluno1.nome);
    printf("Sexo: %c\n", aluno1.sexo);
    printf("Idade: %d\n", aluno1.idade);

    return 0;
}



/* Uso de structs em algoritmos*/ 


/*Imagine agora que você precise trabalhar com dados de cinco alunos, conforme a estrutura Aluno já definida anteriormente. A princípio, poderíamos criar cinco variáveis do tipo aluno, como: */

struct Aluno a1, a2, a3, a4, a5;
 /*Mas isso não é muito prático. Sendo assim, a representação desses cinco registros pode ser ainda mais simplificada se usarmos o conceito de vetores: */

struct Aluno alunos[5];

/*Dessa forma, é criado um vetor de estruturas, em que cada posição do vetor é uma estrutura do tipo "Aluno". A declaração de um vetor de estruturas se assemelha à declaração de um vetor de um tipo básico.*/


/*Quando temos um vetor de estruturas, acessamos cada uma e seus membros da seguinte forma:*/

alunos[0].idade;

alunos[1].idade;

alunos[2].idade;