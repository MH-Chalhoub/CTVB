/*Convertor from C To VB*/
/*Lexer*/

D			[0-9]
L			[a-zA-Z_]

%{
#include "y.tab.h"
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
"char"			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(CHAR); }
"const"			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(CONST); }
"double"		{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(DOUBLE); }
"else"			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(ELSE); }
"float"			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(FLOAT); }
"for"			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(FOR); }
"if"			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(IF); }
"int"			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(INT); }
"long"			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(LONG); }
"return"		{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(RETURN); }
"short"			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(SHORT); }
"signed"		{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(SIGNED); }
"sizeof"		{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(SIZEOF); }
"union"			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(UNION); }
"unsigned"		{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(UNSIGNED); }
"void"			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(VOID); }
"while"			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(WHILE); }
	/*--------------------------------------------------------*/

	/*------------------------Identifier----------------------*/
{L}({L}|{D})*		{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(IDENTIFIER); }
	/*--------------------------------------------------------*/

	/*------------------------CONSTANT----------------------*/
{D}+				{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(CONSTANT); }
{D}+[.]{D}+
	/*--------------------------------------------------------*/
	
	/*----------------------String Literal--------------------*/
L?\"(\\.|[^\\"])*\"	{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(STRING_LITERAL); }
	/*--------------------------------------------------------*/

	/*------------------------Operators-----------------------*/
"+="			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(ADD_ASSIGN); }
"-="			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(SUB_ASSIGN); }
"*="			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(MUL_ASSIGN); }
"/="			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(DIV_ASSIGN); }
"%="			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(MOD_ASSIGN); }
"&="			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(AND_ASSIGN); }
"^="			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(XOR_ASSIGN); }
"|="			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(OR_ASSIGN); }
"++"			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(INC_OP); }
"--"			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(DEC_OP); }
"&&"			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(AND_OP); }
"||"			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(OR_OP); }
"<="			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(LE_OP); }
">="			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(GE_OP); }
"=="			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(EQ_OP); }
"!="			{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(NE_OP); }
";"				{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(';'); }
("{"|"<%")		{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return('{'); }
("}"|"%>")		{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return('}'); }
","				{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(','); }
":"				{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(':'); }
"="				{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return('='); }
"("				{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return('('); }
")"				{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(')'); }
("["|"<:")		{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return('['); }
("]"|":>")		{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return(']'); }
"."				{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return('.'); }
"&"				{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return('&'); }
"!"				{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return('!'); }
"~"				{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return('~'); }
"-"				{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return('-'); }
"+"				{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return('+'); }
"*"				{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return('*'); }
"/"				{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return('/'); }
"%"				{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return('%'); }
"<"				{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return('<'); }
">"				{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return('>'); }
"^"				{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return('^'); }
"|"				{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return('|'); }
"?"				{ count(); p=(char *)malloc((strlen(yytext)+1)*sizeof(char)); strcpy(p,yytext); yylval.charval=p; return('?'); }
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