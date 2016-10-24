#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef RPNConverter
#define RPNConverter

char *rpnconverter(char *alg);
char *rpnconverter_infix2rpn(char *alg);
char *rpnconverter_rpn2infix(char *alg);
char *rpnconverter_orderOfOperation(char *alg);
int rpnconverter_autoselect(char *alg);
int rpnconverter_isValidOperator(char operator);

#endif