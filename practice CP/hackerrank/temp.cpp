#ifndef SLL_CIRCULAR_H_INCLUDED
#define SLL_CIRCULAR_H_INCLUDED
#include <iostream>
using namespace std;

#define info(p) (p)->info
#define next(p) (p)->next
#define first(L) ((L).first)

typedef struct elmList *adr;

struct infotype {
    string nama;
    int prioritas;
    int sisa_durasi;
};

struct elmList {
    infotype info;
    adr next;
};

struct list {
    adr first;
};

void create_list_1301204300(list &L);
adr createElemen_1301204300(infotype dataBaru);
void insertFirst_1301204300(list &L, adr p);
void insertLast_1301204300(list &L, adr p);
void insertAfter_1301204300(list &L, adr prec, adr p);
void insertDescending_1301204300(list &L, infotype dataBaru);
void deleteFirst_1301204300(list &L, adr &p);
void deleteLast_1301204300(list &L, adr &p);
void deleteAfter_1301204300(list &L, adr prec, adr &p);
void deleteElm_1301204300(list &L, adr p);
void printList_1301204300(list L);
int panjangList_1301204300(list L);
void insertAplikasi_1301204300(list &L, infotype dataBaru);
int eksekusi_1301204300(adr p, int durasi);
void eksekusiMulti_1301204300(list &L, adr &current, int N, int duration);

#endif // SLL_CIRCULAR_H_INCLUDED
