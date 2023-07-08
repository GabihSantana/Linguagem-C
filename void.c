#include <stdio.h>

void limpar(void); //Declaração ou protótipo é opcional 
int main()
{
    limpar(); // Chama a função limpar () 

    return 0;
}

void limpar(void) // Definição 
{
    printf("\033[2J"); // Limpa tela 
    printf("\t\t Função : Não recebe argumentos e não retorna valor");
}
