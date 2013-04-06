#ifndef LEX_HANDLER_H
#define LEX_HANDLER_H

void fileTokenizer(const char* filename);
void blank(const char* t);
void addToken(const char* type, const char* content); 

void nestedComment();
void invalidChar(const char* c);
void notOpenedComment();
void idTooBig(const char* c);

#endif /* LEX_HANDLER_H */
