#include <stdio.h>

void exibir(int); //Declaração ou protótipo é opcional 
int main()
{
    int valor = 777; // Variável local da função main
    exibir(valor); //Chamar a função exibir()
    return 0;
}

void exibir(int numero) // Definição - Passagem por cópia ou valor > Origem > destino  // número = variável local apenas da função exibir !! Pois foi o local que ela foi declarada // Variáveis são independentes, se eu mudar numero, não vai alterar nada na valor ( ex: se colocar número +=10 // vai continuar exibindo o valor de 777 
{
    printf("\033[2J"); // Limpa tela 
    printf("\t\t Função: Recebe argumentos e não retorna valor\n");
    printf("Valor recebido: %d", numero); 
}
