#include <stdio.h>

int main() {
    // 1. Correção: Removidos os colchetes internos na inicialização
    int buffer[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    
    // 2. Abertura do arquivo em modo de escrita binária ("wb")
    FILE *file = fopen("output.txt", "wb");
    
    // 3. Boa Prática: Verificar se o arquivo foi aberto com sucesso
    if (file == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1; // Encerra o programa com código de erro
    }
    
    // 4. Escreve os 10 inteiros no arquivo
    fwrite(buffer, sizeof(int), 10, file);
    
    // 5. Fecha o arquivo para salvar as alterações e liberar a memória
    fclose(file);
    
    printf("Arquivo escrito com sucesso!\n");
    return 0;
}
