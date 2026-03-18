#include <stdio.h>
#include <stdlib.h>

/* =========================================================
 * ESTRUTURAS DE DADOS
 * ========================================================= */
// Representa uma máquina na lista circular duplamente encadeada
typedef struct Machine {
    int id;                 // Identificador único da máquina
    int probability;        // Probabilidade de ganhar a pelúcia (0 a 100)
    struct Machine *prev;   // Ponteiro para a máquina anterior
    struct Machine *next;   // Ponteiro para a próxima máquina
} Machine;

// Representa a lista circular
typedef struct List {
    Machine *head;          // Aponta sempre para a "primeira" máquina
    int size;               // Quantidade de máquinas ativas
} List;

/* =========================================================
 * DECLARAÇÃO DAS FUNÇÕES DE EXIBIÇÃO
 * ========================================================= */
void print_attempt(int id, int won) {
    if (won) {
        printf("O URSO DA MAQUINA %d [FOI] OBTIDO!\n", id);
    } else {
        printf("O URSO DA MAQUINA %d [NAO FOI] OBTIDO!\n", id);
    }
}

void print_available_machines(List *list) {
    if (list == NULL || list->size == 0) return;
    
    // Garante que a exibição comece pela máquina de menor ID
    Machine *start = list->head;
    Machine *curr = list->head->next;
    while (curr != list->head) {
        if (curr->id < start->id) {
            start = curr;
        }
        curr = curr->next;
    }

    curr = start;
    do {
        printf("PROBABILIDADE DA MAQUINA %d: %d\n", curr->id, curr->probability);
        curr = curr->next;
    } while (curr != start);
}

/* =========================================================
 * FUNÇÕES EXIGIDAS NO TRABALHO
 * ========================================================= */

// Cria a lista circular duplamente encadeada com 'num_machines'
List* create_list(int num_machines) {
    List *list = (List*)malloc(sizeof(List));
    list->head = NULL;
    list->size = 0;

    Machine *last = NULL;
    for (int i = 1; i <= num_machines; i++) {
        Machine *new_machine = (Machine*)malloc(sizeof(Machine));
        new_machine->id = i;
        new_machine->probability = 5; // Probabilidade inicial padrão

        if (list->head == NULL) {
            list->head = new_machine;
            new_machine->next = new_machine;
            new_machine->prev = new_machine;
            last = new_machine;
        } else {
            new_machine->prev = last;
            new_machine->next = list->head;
            last->next = new_machine;
            list->head->prev = new_machine;
            last = new_machine;
        }
        list->size++;
    }
    return list;
}

// Seleciona uma máquina caminhando 'machine_place' passos a partir do menor ID
Machine* select_machine(List *list, int machine_place) {
    if (list == NULL || list->head == NULL) return NULL;
    
    // O jogador sempre começa a inspeção pela primeira máquina com pelúcia (menor ID)
    Machine *start = list->head;
    Machine *curr = list->head->next;
    while (curr != list->head) {
        if (curr->id < start->id) {
            start = curr;
        }
        curr = curr->next;
    }

    // Dá os passos na lista
    Machine *selected = start;
    for (int i = 0; i < machine_place; i++) {
        selected = selected->next;
    }
    return selected;
}

// Remove a máquina da lista quando o jogador ganha a pelúcia
void remove_machine(List *list, Machine *machine) {
    if (list == NULL || list->size == 0 || machine == NULL) return;

    if (list->size == 1) {
        list->head = NULL;
    } else {
        machine->prev->next = machine->next;
        machine->next->prev = machine->prev;
        
        // Se a máquina removida era o head, movemos o head para a próxima
        if (list->head == machine) {
            list->head = machine->next;
        }
    }
    free(machine);
    list->size--;
}

// Libera toda a memória da lista ao final do programa
void destroy_list(List *list) {
    if (list == NULL) return;
    while (list->size > 0) {
        remove_machine(list, list->head);
    }
    free(list);
}

/* =========================================================
 * FUNÇÃO PRINCIPAL (MAIN)
 * ========================================================= */
int main(int argc, char *argv[]) {
    // Validação de argumentos no terminal
    if (argc != 4) {
        printf("Uso: %s [NR. DE MAQUINAS] [NR. DE RODADAS] [SEMENTE DE RAND.]\n", argv[0]);
        return 1;
    }

    int num_machines = atoi(argv[1]);
    int num_rounds = atoi(argv[2]);
    int seed = atoi(argv[3]);

    srand(seed); // Inicializa a semente aleatória

    List *list = create_list(num_machines);

    for (int r = 1; r <= num_rounds; r++) {
        // Regra: Se todas as máquinas ficarem sem pelúcias, o programa encerra
        if (list->size == 0) {
            break; 
        }

        printf("=== ROUND %d ===\n", r);

        // Geração dos valores aleatórios conforme o escopo do PDF.
        // Como a regra exata de limite do 'machine_place' não foi dita, uso rand() genérico.
        // O machine_attempt varia de 0 a 100.
        int machine_place = rand() % 100; 
        int machine_attempt = rand() % 101; 

        Machine *selected = select_machine(list, machine_place);

        // Regra de vitória: attempt <= probability
        if (machine_attempt <= selected->probability) {
            print_attempt(selected->id, 1);
            remove_machine(list, selected);
        } else {
            print_attempt(selected->id, 0);
            selected->probability += 2; // Acréscimo de +2 em caso de derrota
        }

        print_available_machines(list);
        printf("\n");
    }

    destroy_list(list);
    return 0;
}
