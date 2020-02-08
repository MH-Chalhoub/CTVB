
%{
#include <stdio.h>
#include<stdlib.h>
void yyerror(char *);
int yylex(void);
int sym[26];
int i=0;
extern int column;
extern int line;
%}

%error-verbose

%union { char* charval;}
%token <charval> '(' ')'

%expect 1

%token <charval> IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token <charval> INC_OP DEC_OP LE_OP GE_OP EQ_OP NE_OP
%token <charval> AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token <charval> SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token <charval> XOR_ASSIGN OR_ASSIGN

%token <charval> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOID
%token <charval> UNION

%token <charval> IF ELSE WHILE FOR RETURN

%start translation_unit
%%

primary_expression                                                                                                                                                                
	: IDENTIFIER																		{ printf("primary_expression/IDENTIFIER (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }        
	| CONSTANT																			{ printf("primary_expression/CONSTANT (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }          
	| STRING_LITERAL																	{ printf("primary_expression/STRING_LITERAL (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }    
	| '(' expression ')'																{ printf("primary_expression/'(' expression ')' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

postfix_expression
	: primary_expression																{ printf("postfix_expression/primary_expression (Col:%d,Ln:%d) %d\n",i++,column+1,line+1); }
	| postfix_expression '[' expression ']'												{ printf("postfix_expression/postfix_expression '[' expression ']' (Col:%d,Ln:%d)	 %d\n",column+1,line+1,i++); }
	| postfix_expression '(' ')'														{ printf("postfix_expression/postfix_expression '(' ')' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| postfix_expression '(' argument_expression_list ')'								{ printf("postfix_expression/postfix_expression '(' argument_expression_list ')' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| postfix_expression INC_OP															{ printf("--> %s postfix_expression/postfix_expression INC_OP (Col:%d,Ln:%d) %d\n",$2,column+1,line+1,i++); }
	| postfix_expression DEC_OP															{ printf("postfix_expression/postfix_expression DEC_OP (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;	

argument_expression_list
	: assignment_expression																{ printf("argument_expression_list/assignment_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| argument_expression_list ',' assignment_expression								{ printf("argument_expression_list/argument_expression_list ',' assignment_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

unary_expression
	: postfix_expression																{ printf("unary_expression/postfix_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| INC_OP unary_expression															{ printf("unary_expression/INC_OP unary_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| DEC_OP unary_expression															{ printf("unary_expression/DEC_OP unary_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| unary_operator cast_expression													{ printf("unary_expression/unary_operator cast_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| SIZEOF unary_expression															{ printf("unary_expression/SIZEOF unary_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

unary_operator
	: '&'																				{ printf("unary_operator/'&' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| '*'																				{ printf("unary_operator/'*' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| '+'																				{ printf("unary_operator/'+' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| '-'																				{ printf("unary_operator/'-' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| '~'																				{ printf("unary_operator/'~' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| '!'																				{ printf("unary_operator/'!' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

cast_expression
	: unary_expression																	{ printf("cast_expression/unary_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

multiplicative_expression
	: cast_expression																	{ printf("multiplicative_expression/cast_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| multiplicative_expression '*' cast_expression										{ printf("multiplicative_expression/multiplicative_expression '*' cast_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| multiplicative_expression '/' cast_expression										{ printf("multiplicative_expression/multiplicative_expression '/' cast_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| multiplicative_expression '%' cast_expression										{ printf("multiplicative_expression/multiplicative_expression '%' cast_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

additive_expression
	: multiplicative_expression															{ printf("additive_expression/multiplicative_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| additive_expression '+' multiplicative_expression									{ printf("additive_expression/additive_expression '+' multiplicative_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| additive_expression '-' multiplicative_expression									{ printf("additive_expression/additive_expression '-' multiplicative_expression (Col:%d,Ln:%d)	 %d\n",column+1,line+1,i++); }
	;

shift_expression
	: additive_expression																{ printf("shift_expression/additive_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

relational_expression
	: shift_expression																	{ printf("relational_expression/shift_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| relational_expression '<' shift_expression										{ printf("relational_expression/relational_expression '<' shift_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| relational_expression '>' shift_expression										{ printf("relational_expression/relational_expression '>' shift_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| relational_expression LE_OP shift_expression										{ printf("relational_expression/relational_expression LE_OP shift_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| relational_expression GE_OP shift_expression										{ printf("relational_expression/relational_expression GE_OP shift_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

equality_expression
	: relational_expression																{ printf("equality_expression/relational_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| equality_expression EQ_OP relational_expression									{ printf("equality_expression/equality_expression EQ_OP relational_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| equality_expression NE_OP relational_expression									{ printf("equality_expression/equality_expression NE_OP relational_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

and_expression
	: equality_expression																{ printf("and_expression/equality_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| and_expression '&' equality_expression											{ printf("and_expression/and_expression '&' equality_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

exclusive_or_expression
	: and_expression																	{ printf("exclusive_or_expression/and_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| exclusive_or_expression '^' and_expression										{ printf("exclusive_or_expression/exclusive_or_expression '^' and_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

inclusive_or_expression
	: exclusive_or_expression															{ printf("inclusive_or_expression/exclusive_or_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| inclusive_or_expression '|' exclusive_or_expression								{ printf("inclusive_or_expression/inclusive_or_expression '|' exclusive_or_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

logical_and_expression
	: inclusive_or_expression															{ printf("logical_and_expression/inclusive_or_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| logical_and_expression AND_OP inclusive_or_expression								{ printf("logical_and_expression/logical_and_expression AND_OP inclusive_or_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

logical_or_expression
	: logical_and_expression															{ printf("logical_or_expression/logical_and_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| logical_or_expression OR_OP logical_and_expression								{ printf("logical_or_expression/logical_or_expression OR_OP logical_and_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

conditional_expression
	: logical_or_expression																{ printf("conditional_expression/logical_or_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| logical_or_expression '?' expression ':' conditional_expression					{ printf("conditional_expression/logical_or_expression '?' expression ':' conditional_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

assignment_expression
	: conditional_expression															{ printf("assignment_expression/conditional_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| unary_expression assignment_operator assignment_expression						{ printf("assignment_expression/unary_expression assignment_operator assignment_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

assignment_operator
	: '='																				{ printf("assignment_operator/'=' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| MUL_ASSIGN																		{ printf("assignment_operator/MUL_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| DIV_ASSIGN																		{ printf("assignment_operator/DIV_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| MOD_ASSIGN																		{ printf("assignment_operator/MOD_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| ADD_ASSIGN																		{ printf("assignment_operator/ADD_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| SUB_ASSIGN																		{ printf("assignment_operator/SUB_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| LEFT_ASSIGN																		{ printf("assignment_operator/LEFT_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| RIGHT_ASSIGN																		{ printf("assignment_operator/RIGHT_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| AND_ASSIGN																		{ printf("assignment_operator/AND_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| XOR_ASSIGN																		{ printf("assignment_operator/XOR_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| OR_ASSIGN																			{ printf("assignment_operator/OR_ASSIGN (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

expression
	: assignment_expression																{ printf("expression/assignment_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| expression ',' assignment_expression												{ printf("expression/expression ',' assignment_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

declaration
	: declaration_specifiers ';'														{ printf("declaration/declaration_specifiers ';' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| declaration_specifiers init_declarator_list ';'									{ printf("declaration/declaration_specifiers init_declarator_list ';' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

declaration_specifiers
	: type_specifier																	{ printf("declaration_specifiers/type_specifier (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| type_specifier declaration_specifiers												{ printf("declaration_specifiers/type_specifier declaration_specifiers (Col:%d,Ln:%d)	 %d\n",column+1,line+1,i++); }
	| type_qualifier																	{ printf("declaration_specifiers/type_qualifier (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| type_qualifier declaration_specifiers												{ printf("declaration_specifiers/type_qualifier declaration_specifiers (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

init_declarator_list
	: init_declarator																	{ printf("init_declarator_list/init_declarator (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| init_declarator_list ',' init_declarator											{ printf("init_declarator_list/init_declarator_list ',' init_declarator (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

init_declarator
	: declarator																		{ printf("init_declarator/declarator (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| declarator '=' initializer														{ printf("init_declarator/declarator '=' initializer (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

type_specifier
	: VOID																				{ printf("type_specifier/VOID (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| CHAR																				{ printf("type_specifier/CHAR (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| SHORT																				{ printf("type_specifier/SHORT (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| INT																				{ printf("type_specifier/INT (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| LONG																				{ printf("type_specifier/LONG (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| FLOAT																				{ printf("type_specifier/FLOAT (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| DOUBLE																			{ printf("type_specifier/DOUBLE (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| SIGNED																			{ printf("type_specifier/SIGNED (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| UNSIGNED																			{ printf("type_specifier/UNSIGNED (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

type_qualifier
	: CONST																				{ printf("type_qualifier/CONST (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

declarator
	: direct_declarator																	{ printf("declarator/direct_declarator (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

direct_declarator
	: IDENTIFIER																		{ printf("direct_declarator/IDENTIFIER (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| '(' declarator ')'																{ printf("direct_declarator/'(' declarator ')' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| direct_declarator '[' ']'															{ printf("direct_declarator/direct_declarator '[' ']' (Col:%d,Ln:%d)	 %d\n",column+1,line+1,i++); }
	| direct_declarator '(' identifier_list ')'											{ printf("direct_declarator/direct_declarator '(' identifier_list ')' (Col:%d,Ln:%d)	 %d\n",column+1,line+1,i++); }
	| direct_declarator '(' ')'															{ printf("--> %s direct_declarator/direct_declarator '(' ')' (Col:%d,Ln:%d) %d\n",$2,column+1,line+1,i++); }
	;

identifier_list
	: IDENTIFIER																		{ printf("identifier_list/IDENTIFIER (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| identifier_list ',' IDENTIFIER													{ printf("identifier_list/identifier_list ',' IDENTIFIER (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

initializer
	: assignment_expression																{ printf("initializer/assignment_expression (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| '{' initializer_list '}'															{ printf("initializer/'{' initializer_list '}' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| '{' initializer_list ',' '}'														{ printf("initializer/'{' initializer_list ',' '}' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

initializer_list
	: initializer																		{ printf("initializer_list/initializer (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| initializer_list ',' initializer													{ printf("initializer_list/initializer_list ',' initializer (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

statement
	: compound_statement																{ printf("statement/compound_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| expression_statement																{ printf("statement/expression_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| selection_statement																{ printf("statement/selection_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| iteration_statement																{ printf("statement/iteration_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| jump_statement																	{ printf("statement/jump_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

compound_statement
	: '{' '}'																			{ printf("compound_statement/'{' '}' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| '{' statement_list '}'															{ printf("compound_statement/'{' statement_list '}' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| '{' declaration_list '}'															{ printf("compound_statement/'{' declaration_list '}' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| '{' declaration_list statement_list '}'											{ printf("compound_statement/'{' declaration_list statement_list '}' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

declaration_list
	: declaration																		{ printf("declaration_list/declaration (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| declaration_list declaration														{ printf("declaration_list/declaration_list declaration (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

statement_list
	: statement																			{ printf("statement_list/statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| statement_list statement															{ printf("statement_list/statement_list statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

expression_statement
	: ';'																				{ printf("expression_statement/';' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| expression ';'																	{ printf("expression_statement/expression ';' (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

selection_statement
	: IF '(' expression ')' statement													{ printf("selection_statement/IF '(' expression ')' statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| IF '(' expression ')' statement ELSE statement									{ printf("selection_statement/IF '(' expression ')' statement ELSE statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

iteration_statement
	: WHILE '(' expression ')' statement					  							{ printf("iteration_statement/WHILE '(' expression ')' statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| FOR '(' expression_statement expression_statement ')' statement					{ printf("iteration_statement/FOR '(' expression_statement expression_statement ')' statement (Col:%d,Ln:%d)	 %d\n",column+1,line+1,i++); }
	| FOR '(' expression_statement expression_statement expression ')' statement		{ printf("iteration_statement/FOR '(' expression_statement expression_statement expression ')' statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

jump_statement
	: RETURN ';'						  												{ printf("jump_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| RETURN expression ';'
	;

translation_unit
	: external_declaration																{ printf("translation_unit/external_declaration (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| translation_unit external_declaration												{ printf("translation_unit/translation_unit external_declaration (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

external_declaration
	: function_definition																{ printf("external_declaration/function_definition (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| declaration																		{ printf("external_declaration/declaration (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement				{ printf("function_definition/eclaration_specifiers declarator declaration_list compound_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| declaration_specifiers declarator compound_statement								{ printf("function_definition/declaration_specifiers declarator compound_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| declarator declaration_list compound_statement									{ printf("function_definition/declarator declaration_list compound_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	| declarator compound_statement														{ printf("function_definition/declarator compound_statement (Col:%d,Ln:%d) %d\n",column+1,line+1,i++); }
	;

%%
void yyerror(char *s)
{  
	//fprintf(stderr, "the error at column %d and line %d : %s and i = %d\n",column+1,line+1,s,i);
	fprintf(stderr, "Syntax error : %s at column %d and line %d\n", s, column+1, line+1);
	FILE *fPtr;
	char result[100];
	fPtr = fopen("Syntax_error.txt", "w");
	sprintf(result, "Syntax error : %s at column %d and line %d\n", s, column+1, line+1); 
    if(fPtr == NULL)
    {
        /* File not created hence exit */
        printf("Unable to create error file.\n");
        exit(EXIT_FAILURE);
    }
    fputs(result, fPtr);
    fclose(fPtr);
}
int main(void) 
{
	remove("Lexical_error.txt");
	remove("Syntax_error.txt");
	yyparse();
}