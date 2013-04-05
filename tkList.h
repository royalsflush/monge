#ifndef TK_LIST_H
#define TK_LIST_H

typedef struct tkListNode tkListNode;

tkListNode* createNode(const char* type, const char* content, tkListNode* next);

typedef struct tkList tkList;

tkList* createList();
void addToken(tkList* l, const char* type, const char* content);
int emptyList(tkList* l);
void printList(tkList* l);

/* Static list pointer */
tkList* gList();

#endif /* TK_LIST_H */
