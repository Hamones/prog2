#include <stdio.h>
#include <stdlib.h>
#include <gdbm.h>
int main(void) {
GDBM_FILE db;
datum key, value;
db = gdbm_open("meu_banco.db", 0, GDBM_WRCREAT, 0666,
NULL);
key.dptr = "chave";
key.dsize = sizeof("chave");
value.dptr = "valor";
value.dsize = sizeof("valor");
gdbm_store(db, key, value, GDBM_REPLACE);
key.dptr = "chave";
key.dsize = sizeof("chave");
value = gdbm_fetch(db, key);
printf("Valor da chave 'chave': %s\n", value.dptr);
gdbm_close(db);
return EXIT_SUCCESS;
}
