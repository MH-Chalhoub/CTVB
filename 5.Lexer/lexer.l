/*Convertor from C To VB*/
/*Lexer*/

D			[0-9]
L			[a-zA-Z_]

%{
#include <stdlib.h>
#include <string.h>
#define YYSTYPE char

int line = 0;
int column = 0;
char *p;
void count();
%}
%option noyywrap
%%
	/*------------------------Keywords------------------------*/
"char"			{ count(); printf("--> %s\n",yytext); }
"const"			{ count(); printf("--> %s\n",yytext); }
"double"		{ count(); printf("--> %s\n",yytext); }
"else"			{ count(); printf("--> %s\n",yytext); }
"float"			{ count(); printf("--> %s\n",yytext); }
"for"			{ count(); printf("--> %s\n",yytext); }
"if"			{ count(); printf("--> %s\n",yytext); }
"int"			{ count(); printf("--> %s\n",yytext); }
"long"			{ count(); printf("--> %s\n",yytext); }
"return"		{ count(); printf("--> %s\n",yytext); }
"short"			{ count(); printf("--> %s\n",yytext); }
"signed"		{ count(); printf("--> %s\n",yytext); }
"sizeof"		{ count(); printf("--> %s\n",yytext); }
"union"			{ count(); printf("--> %s\n",yytext); }
"unsigned"		{ count(); printf("--> %s\n",yytext); }
"void"			{ count(); printf("--> %s\n",yytext); }
"while"			{ count(); printf("--> %s\n",yytext); }
	/*--------------------------------------------------------*/

	/*------------------------Identifier----------------------*/
{L}({L}|{D})*		{ count(); printf("IDENTIFIER--> %s\n",yytext); }
	/*--------------------------------------------------------*/

	/*------------------------CONSTANT----------------------*/
{D}+				{ count(); printf("CONSTANT--> %s\n",yytext); }
{D}+[.]{D}+
	/*--------------------------------------------------------*/
	
	/*----------------------String Literal--------------------*/
L?\"(\\.|[^\\"])*\"	{ count(); printf("STRING_LITERAL--> %s\n",yytext); }
	/*--------------------------------------------------------*/

	/*------------------------Operators-----------------------*/
"+="			{ count(); printf("ADD_ASSIGN--> %s\n",yytext); }
"-="			{ count(); printf("SUB_ASSIGN--> %s\n",yytext); }
"*="			{ count(); printf("MUL_ASSIGN--> %s\n",yytext); }
"/="			{ count(); printf("DIV_ASSIGN--> %s\n",yytext); }
"%="			{ count(); printf("MOD_ASSIGN--> %s\n",yytext); }
"&="			{ count(); printf("AND_ASSIGN--> %s\n",yytext); }
"^="			{ count(); printf("XOR_ASSIGN--> %s\n",yytext); }
"|="			{ count(); printf("OR_ASSIGN--> %s\n",yytext); }
"++"			{ count(); printf("INC_OP--> %s\n",yytext); }
"--"			{ count(); printf("DEC_OP--> %s\n",yytext); }
"&&"			{ count(); printf("AND_OP--> %s\n",yytext); }
"||"			{ count(); printf("OR_OP--> %s\n",yytext); }
"<="			{ count(); printf("LE_OP--> %s\n",yytext); }
">="			{ count(); printf("GE_OP--> %s\n",yytext); }
"=="			{ count(); printf("EQ_OP--> %s\n",yytext); }
"!="			{ count(); printf("NE_OP--> %s\n",yytext); }
";"				{ count(); printf("--> %s\n",yytext); }
("{"|"<%")		{ count(); printf("--> %s\n",yytext); }
("}"|"%>")		{ count(); printf("--> %s\n",yytext); }
","				{ count(); printf("--> %s\n",yytext); }
":"				{ count(); printf("--> %s\n",yytext); }
"="				{ count(); printf("--> %s\n",yytext); }
"("				{ count(); printf("--> %s\n",yytext); }
")"				{ count(); printf("--> %s\n",yytext); }
("["|"<:")		{ count(); printf("--> %s\n",yytext); }
("]"|":>")		{ count(); printf("--> %s\n",yytext); }
"."				{ count(); printf("--> %s\n",yytext); }
"&"				{ count(); printf("--> %s\n",yytext); }
"!"				{ count(); printf("--> %s\n",yytext); }
"~"				{ count(); printf("--> %s\n",yytext); }
"-"				{ count(); printf("--> %s\n",yytext); }
"+"				{ count(); printf("--> %s\n",yytext); }
"*"				{ count(); printf("--> %s\n",yytext); }
"/"				{ count(); printf("--> %s\n",yytext); }
"%"				{ count(); printf("--> %s\n",yytext); }
"<"				{ count(); printf("--> %s\n",yytext); }
">"				{ count(); printf("--> %s\n",yytext); }
"^"				{ count(); printf("--> %s\n",yytext); }
"|"				{ count(); printf("--> %s\n",yytext); }
"?"				{ count(); printf("--> %s\n",yytext); }
	/*--------------------------------------------------------*/

	/*--------------------Special Char------------------------*/
[ \t\v\n\f]		{ count(); }
.				{ 
					printf("Lexical error : Unknown character ->%s<- at column %d and line %d\n", yytext, column+1, line+1); 
					FILE *fPtr;
					char result[100];
					fPtr = fopen("Lexical_error.txt", "w");
					sprintf(result, "Lexical error : Unknown character ->%s<- at column %d and line %d\n", yytext, column+1, line+1); 
					if(fPtr == NULL)
					{
						/* File not created hence exit */
						printf("Unable to create error file.\n");
						exit(EXIT_FAILURE);
					}
					fputs(result, fPtr);
					fclose(fPtr);
				}
	/*--------------------------------------------------------*/

%%


void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
		{
			column = 0;
			line++;
			printf("\n");
		}
		else if (yytext[i] == '\t')
			column += 4 - (column % 4);
		else
			column++;

	//printf("-->%d ",column);
	//ECHO;
}
void main()
{
	yylex();
}