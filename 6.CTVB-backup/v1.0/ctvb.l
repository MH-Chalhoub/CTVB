/*Convertor from C To VB*/
/*Lexer*/

D			[0-9]
L			[a-zA-Z_]

%{
#include "y.tab.h"
#include <stdlib.h>
#include <string.h>

int column = 0;
void count();
%}
%option noyywrap

%%
	/*------------------------Keywords------------------------*/
"char"			{ count(); return(CHAR); }
"const"			{ count(); return(CONST); }
"double"		{ count(); return(DOUBLE); }
"else"			{ count(); return(ELSE); }
"float"			{ count(); return(FLOAT); }
"for"			{ count(); return(FOR); }
"if"			{ count(); return(IF); }
"int"			{ count(); return(INT); }
"long"			{ count(); return(LONG); }
"return"		{ count(); return(RETURN); }
"short"			{ count(); return(SHORT); }
"signed"		{ count(); return(SIGNED); }
"sizeof"		{ count(); return(SIZEOF); }
"union"			{ count(); return(UNION); }
"unsigned"		{ count(); return(UNSIGNED); }
"void"			{ count(); return(VOID); }
"while"			{ count(); return(WHILE); }
	/*--------------------------------------------------------*/

	/*------------------------Identifier----------------------*/
{L}({L}|{D})*		{ count();/* printf("The letter is ");puts(yytext);*/ return(IDENTIFIER); }
	/*--------------------------------------------------------*/

	/*------------------------CONSTANT----------------------*/
{D}+				{ count(); return(CONSTANT); }
{D}+[.]{D}+
	/*--------------------------------------------------------*/
	
	/*----------------------String Literal--------------------*/
L?\"(\\.|[^\\"])*\"	{ count(); return(STRING_LITERAL); }
	/*--------------------------------------------------------*/

	/*------------------------Operators-----------------------*/
"+="			{ count(); return(ADD_ASSIGN); }
"-="			{ count(); return(SUB_ASSIGN); }
"*="			{ count(); return(MUL_ASSIGN); }
"/="			{ count(); return(DIV_ASSIGN); }
"%="			{ count(); return(MOD_ASSIGN); }
"&="			{ count(); return(AND_ASSIGN); }
"^="			{ count(); return(XOR_ASSIGN); }
"|="			{ count(); return(OR_ASSIGN); }
"++"			{ count(); return(INC_OP); }
"--"			{ count(); return(DEC_OP); }
"&&"			{ count(); return(AND_OP); }
"||"			{ count(); return(OR_OP); }
"<="			{ count(); return(LE_OP); }
">="			{ count(); return(GE_OP); }
"=="			{ count(); return(EQ_OP); }
"!="			{ count(); return(NE_OP); }
";"				{ count(); return(';'); }
("{"|"<%")		{ count(); return('{'); }
("}"|"%>")		{ count(); return('}'); }
","				{ count(); return(','); }
":"				{ count(); return(':'); }
"="				{ count(); return('='); }
"("				{ count(); return('('); }
")"				{ count(); return(')'); }
("["|"<:")		{ count(); return('['); }
("]"|":>")		{ count(); return(']'); }
"."				{ count(); return('.'); }
"&"				{ count(); return('&'); }
"!"				{ count(); return('!'); }
"~"				{ count(); return('~'); }
"-"				{ count(); return('-'); }
"+"				{ count(); return('+'); }
"*"				{ count(); return('*'); }
"/"				{ count(); return('/'); }
"%"				{ count(); return('%'); }
"<"				{ count(); return('<'); }
">"				{ count(); return('>'); }
"^"				{ count(); return('^'); }
"|"				{ count(); return('|'); }
"?"				{ count(); return('?'); }
	/*--------------------------------------------------------*/

	/*--------------------Special Char------------------------*/
[ \t\v\n\f]		{ count(); }
.				{ printf("Unknown character at %d\n",column); }
	/*--------------------------------------------------------*/

%%


void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	//printf("-->%d ",column);
	//ECHO;
}