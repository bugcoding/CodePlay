
#ifndef _STRING_LIB_H_
#define _STRING_LIB_H_

//like bool
typedef enum{false, true} boolean;

//get string length
unsigned int string_len(const char *str);

//reverse string
char *string_reverse(char *need_rev);
//get character pos in string

int string_firstindexof(const char *str, char ch);
//get char last pos of string

int string_lastindexof(const char *str, char ch);

//get substring
boolean string_substr_2index(const char *str, char *sub_str,
                                int offset, int end);

//return substring with index and length
boolean string_substr_length(const char *str, char *sub_str,
                                int offset, int len);

//delete all space character of string tail
void string_deltailspace(char *str);
//delete spaces from string head and tail
boolean string_trim(char *str);

//check string is words or not
boolean string_iswords(const char *str);

#endif