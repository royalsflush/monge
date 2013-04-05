#ifndef LEX_HANDLER_H
#define LEX_HANDLER_H

void fileTokenizer(const char* filename);
void blank(const char* t);
void addToken(const char* type, const char* content); 
void nestedComment();

#endif /* LEX_HANDLER_H */
