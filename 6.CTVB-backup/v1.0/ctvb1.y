
%{
#include <stdio.h>
#include<stdlib.h>
void yyerror(char *);
int yylex(void);
int sym[26];
int i=0;
%}

%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token INC_OP DEC_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN

%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOID
%token UNION

%token IF ELSE WHILE FOR RETURN

%start translation_unit
%%

primary_expression
	: IDENTIFIER																		{ printf("primary_expression/IDENTIFIER %d\n",i++); }
	| CONSTANT																			{ printf("primary_expression/CONSTANT %d\n",i++); }
	| STRING_LITERAL																	{ printf("primary_expression/STRING_LITERAL %d\n",i++); }
	| '(' expression ')'																{ printf("primary_expression/'(' expression ')' %d\n",i++); }
	;

postfix_expression
	: primary_expression																{ printf("postfix_expression/primary_expression %d\n",i++); }
	| postfix_expression '[' expression ']'												{ printf("postfix_expression/postfix_expression '[' expression ']'	 %d\n",i++); }
	| postfix_expression '(' ')'														{ printf("postfix_expression/postfix_expression '(' ')' %d\n",i++); }
	| postfix_expression '(' argument_expression_list ')'								{ printf("postfix_expression/postfix_expression '(' argument_expression_list ')' %d\n",i++); }
	| postfix_expression INC_OP															{ printf("postfix_expression/postfix_expression INC_OP %d\n",i++); }
	| postfix_expression DEC_OP															{ printf("postfix_expression/postfix_expression DEC_OP %d\n",i++); }
	;	

argument_expression_list
	: assignment_expression																{ printf("argument_expression_list/assignment_expression %d\n",i++); }
	| argument_expression_list ',' assignment_expression								{ printf("argument_expression_list/argument_expression_list ',' assignment_expression %d\n",i++); }
	;

unary_expression
	: postfix_expression																{ printf("unary_expression/assignment_expression %d\n",i++); }
	| INC_OP unary_expression															{ printf("unary_expression/INC_OP unary_expression %d\n",i++); }
	| DEC_OP unary_expression															{ printf("unary_expression/DEC_OP unary_expression %d\n",i++); }
	| unary_operator cast_expression													{ printf("unary_expression/unary_operator cast_expression %d\n",i++); }
	| SIZEOF unary_expression															{ printf("unary_expression/SIZEOF unary_expression %d\n",i++); }
	;

unary_operator
	: '&'																				{ printf("unary_operator/'&' %d\n",i++); }
	| '*'																				{ printf("unary_operator/'*' %d\n",i++); }
	| '+'																				{ printf("unary_operator/'+' %d\n",i++); }
	| '-'																				{ printf("unary_operator/'-' %d\n",i++); }
	| '~'																				{ printf("unary_operator/'~' %d\n",i++); }
	| '!'																				{ printf("unary_operator/'!' %d\n",i++); }
	;

cast_expression
	: unary_expression																	{ printf("cast_expression/unary_expression %d\n",i++); }
	;

multiplicative_expression
	: cast_expression																	{ printf("multiplicative_expression/cast_expression %d\n",i++); }
	| multiplicative_expression '*' cast_expression										{ printf("multiplicative_expression/multiplicative_expression '*' cast_expression %d\n",i++); }
	| multiplicative_expression '/' cast_expression										{ printf("multiplicative_expression/multiplicative_expression '/' cast_expression %d\n",i++); }
	| multiplicative_expression '%' cast_expression										{ printf("multiplicative_expression/multiplicative_expression '%' cast_expression %d\n",i++); }
	;

additive_expression
	: multiplicative_expression															{ printf("additive_expression/multiplicative_expression %d\n",i++); }
	| additive_expression '+' multiplicative_expression									{ printf("additive_expression/additive_expression '+' multiplicative_expression %d\n",i++); }
	| additive_expression '-' multiplicative_expression									{ printf("additive_expression/additive_expression '-' multiplicative_expression	 %d\n",i++); }
	;

shift_expression
	: additive_expression																{ printf("shift_expression/additive_expression %d\n",i++); }
	;

relational_expression
	: shift_expression																	{ printf("relational_expression/shift_expression %d\n",i++); }
	| relational_expression '<' shift_expression										{ printf("relational_expression/relational_expression '<' shift_expression %d\n",i++); }
	| relational_expression '>' shift_expression										{ printf("relational_expression/relational_expression '>' shift_expression %d\n",i++); }
	| relational_expression LE_OP shift_expression										{ printf("relational_expression/relational_expression LE_OP shift_expression %d\n",i++); }
	| relational_expression GE_OP shift_expression										{ printf("relational_expression/relational_expression GE_OP shift_expression %d\n",i++); }
	;

equality_expression
	: relational_expression																{ printf("equality_expression/relational_expression %d\n",i++); }
	| equality_expression EQ_OP relational_expression									{ printf("equality_expression/equality_expression EQ_OP relational_expression %d\n",i++); }
	| equality_expression NE_OP relational_expression									{ printf("equality_expression/equality_expression NE_OP relational_expression %d\n",i++); }
	;

and_expression
	: equality_expression																{ printf("and_expression/equality_expression %d\n",i++); }
	| and_expression '&' equality_expression											{ printf("and_expression/and_expression '&' equality_expression %d\n",i++); }
	;

exclusive_or_expression
	: and_expression																	{ printf("exclusive_or_expression/and_expression %d\n",i++); }
	| exclusive_or_expression '^' and_expression										{ printf("exclusive_or_expression/exclusive_or_expression '^' and_expression %d\n",i++); }
	;

inclusive_or_expression
	: exclusive_or_expression															{ printf("inclusive_or_expression/exclusive_or_expression %d\n",i++); }
	| inclusive_or_expression '|' exclusive_or_expression								{ printf("inclusive_or_expression/inclusive_or_expression '|' exclusive_or_expression %d\n",i++); }
	;

logical_and_expression
	: inclusive_or_expression															{ printf("logical_and_expression/inclusive_or_expression %d\n",i++); }
	| logical_and_expression AND_OP inclusive_or_expression								{ printf("logical_and_expression/logical_and_expression AND_OP inclusive_or_expression %d\n",i++); }
	;

logical_or_expression
	: logical_and_expression															{ printf("logical_or_expression/logical_and_expression %d\n",i++); }
	| logical_or_expression OR_OP logical_and_expression								{ printf("logical_or_expression/logical_or_expression OR_OP logical_and_expression %d\n",i++); }
	;

conditional_expression
	: logical_or_expression																{ printf("conditional_expression/logical_or_expression %d\n",i++); }
	| logical_or_expression '?' expression ':' conditional_expression					{ printf("conditional_expression/logical_or_expression '?' expression ':' conditional_expression %d\n",i++); }
	;

assignment_expression
	: conditional_expression															{ printf("assignment_expression/conditional_expression %d\n",i++); }
	| unary_expression assignment_operator assignment_expression						{ printf("assignment_expression/unary_expression assignment_operator assignment_expression %d\n",i++); }
	;

assignment_operator
	: '='																				{ printf("assignment_operator/'=' %d\n",i++); }
	| MUL_ASSIGN																		{ printf("assignment_operator/MUL_ASSIGN %d\n",i++); }
	| DIV_ASSIGN																		{ printf("assignment_operator/DIV_ASSIGN %d\n",i++); }
	| MOD_ASSIGN																		{ printf("assignment_operator/MOD_ASSIGN %d\n",i++); }
	| ADD_ASSIGN																		{ printf("assignment_operator/ADD_ASSIGN %d\n",i++); }
	| SUB_ASSIGN																		{ printf("assignment_operator/SUB_ASSIGN %d\n",i++); }
	| LEFT_ASSIGN																		{ printf("assignment_operator/LEFT_ASSIGN %d\n",i++); }
	| RIGHT_ASSIGN																		{ printf("assignment_operator/RIGHT_ASSIGN %d\n",i++); }
	| AND_ASSIGN																		{ printf("assignment_operator/AND_ASSIGN %d\n",i++); }
	| XOR_ASSIGN																		{ printf("assignment_operator/XOR_ASSIGN %d\n",i++); }
	| OR_ASSIGN																			{ printf("assignment_operator/OR_ASSIGN %d\n",i++); }
	;

expression
	: assignment_expression																{ printf("expression/assignment_expression %d\n",i++); }
	| expression ',' assignment_expression												{ printf("expression/expression ',' assignment_expression %d\n",i++); }
	;

declaration
	: declaration_specifiers ';'														{ printf("declaration/declaration_specifiers ';' %d\n",i++); }
	| declaration_specifiers init_declarator_list ';'									{ printf("declaration/declaration_specifiers init_declarator_list ';' %d\n",i++); }
	;

declaration_specifiers
	: type_specifier																	{ printf("declaration_specifiers/type_specifier %d\n",i++); }
	| type_specifier declaration_specifiers												{ printf("declaration_specifiers/type_specifier declaration_specifiers	 %d\n",i++); }
	| type_qualifier																	{ printf("declaration_specifiers/type_qualifier %d\n",i++); }
	| type_qualifier declaration_specifiers												{ printf("declaration_specifiers/type_qualifier declaration_specifiers %d\n",i++); }
	;

init_declarator_list
	: init_declarator																	{ printf("init_declarator_list/init_declarator %d\n",i++); }
	| init_declarator_list ',' init_declarator											{ printf("init_declarator_list/init_declarator_list ',' init_declarator %d\n",i++); }
	;

init_declarator
	: declarator																		{ printf("init_declarator/declarator %d\n",i++); }
	| declarator '=' initializer														{ printf("init_declarator/declarator '=' initializer %d\n",i++); }
	;

type_specifier
	: VOID																				{ printf("type_specifier/VOID %d\n",i++); }
	| CHAR																				{ printf("type_specifier/CHAR %d\n",i++); }
	| SHORT																				{ printf("type_specifier/SHORT %d\n",i++); }
	| INT																				{ printf("type_specifier/INT %d\n",i++); }
	| LONG																				{ printf("type_specifier/LONG %d\n",i++); }
	| FLOAT																				{ printf("type_specifier/FLOAT %d\n",i++); }
	| DOUBLE																			{ printf("type_specifier/DOUBLE %d\n",i++); }
	| SIGNED																			{ printf("type_specifier/SIGNED %d\n",i++); }
	| UNSIGNED																			{ printf("type_specifier/UNSIGNED %d\n",i++); }
	;

type_qualifier
	: CONST																				{ printf("type_qualifier/CONST %d\n",i++); }
	;

declarator
	: direct_declarator																	{ printf("declarator/direct_declarator %d\n",i++); }
	;

direct_declarator
	: IDENTIFIER																		{ printf("direct_declarator/IDENTIFIER %c %d\n",$1,i++); }
	| '(' declarator ')'																{ printf("direct_declarator/'(' declarator ')' %d\n",i++); }
	| direct_declarator '[' ']'															{ printf("direct_declarator/direct_declarator '[' ']'	 %d\n",i++); }
	| direct_declarator '(' identifier_list ')'											{ printf("direct_declarator/direct_declarator '(' identifier_list ')'	 %d\n",i++); }
	| direct_declarator '(' ')'															{ printf("direct_declarator/direct_declarator '(' ')' %d\n",i++); }
	;

identifier_list
	: IDENTIFIER																		{ printf("identifier_list/IDENTIFIER %d\n",i++); }
	| identifier_list ',' IDENTIFIER													{ printf("identifier_list/identifier_list ',' IDENTIFIER %d\n",i++); }
	;

initializer
	: assignment_expression																{ printf("initializer/assignment_expression %d\n",i++); }
	| '{' initializer_list '}'															{ printf("initializer/'{' initializer_list '}' %d\n",i++); }
	| '{' initializer_list ',' '}'														{ printf("initializer/'{' initializer_list ',' '}' %d\n",i++); }
	;

initializer_list
	: initializer																		{ printf("initializer_list/initializer %d\n",i++); }
	| initializer_list ',' initializer													{ printf("initializer_list/initializer_list ',' initializer %d\n",i++); }
	;

statement
	: compound_statement																{ printf("statement/compound_statement %d\n",i++); }
	| expression_statement																{ printf("statement/expression_statement %d\n",i++); }
	| selection_statement																{ printf("statement/selection_statement %d\n",i++); }
	| iteration_statement																{ printf("statement/iteration_statement %d\n",i++); }
	| jump_statement																	{ printf("statement/jump_statement %d\n",i++); }
	;

compound_statement
	: '{' '}'																			{ printf("compound_statement/'{' '}' %d\n",i++); }
	| '{' statement_list '}'															{ printf("compound_statement/'{' statement_list '}' %d\n",i++); }
	| '{' declaration_list '}'															{ printf("compound_statement/'{' declaration_list '}' %d\n",i++); }
	| '{' declaration_list statement_list '}'											{ printf("compound_statement/'{' declaration_list statement_list '}' %d\n",i++); }
	;

declaration_list
	: declaration																		{ printf("declaration_list/declaration %d\n",i++); }
	| declaration_list declaration														{ printf("declaration_list/declaration_list declaration %d\n",i++); }
	;

statement_list
	: statement																			{ printf("statement_list/statement %d\n",i++); }
	| statement_list statement															{ printf("statement_list/statement_list statement %d\n",i++); }
	;

expression_statement
	: ';'																				{ printf("expression_statement/';' %d\n",i++); }
	| expression ';'																	{ printf("expression_statement/expression ';' %d\n",i++); }
	;

selection_statement
	: IF '(' expression ')' statement													{ printf("selection_statement/IF '(' expression ')' statement %d\n",i++); }
	| IF '(' expression ')' statement ELSE statement									{ printf("selection_statement/IF '(' expression ')' statement ELSE statement %d\n",i++); }
	;

iteration_statement
	: WHILE '(' expression ')' statement					  							{ printf("iteration_statement/WHILE '(' expression ')' statement %d\n",i++); }
	| FOR '(' expression_statement expression_statement ')' statement					{ printf("iteration_statement/FOR '(' expression_statement expression_statement ')' statement	 %d\n",i++); }
	| FOR '(' expression_statement expression_statement expression ')' statement		{ printf("iteration_statement/FOR '(' expression_statement expression_statement expression ')' statement %d\n",i++); }
	;

jump_statement
	: RETURN ';'						  												{ printf("jump_statement %d\n",i++); }
	| RETURN expression ';'
	;

translation_unit
	: external_declaration																{ printf("translation_unit/external_declaration %d\n",i++); }
	| translation_unit external_declaration												{ printf("translation_unit/translation_unit external_declaration %d\n",i++); }
	;

external_declaration
	: function_definition																{ printf("external_declaration/function_definition %d\n",i++); }
	| declaration																		{ printf("external_declaration/declaration %d\n",i++); }
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement				{ printf("function_definition/eclaration_specifiers declarator declaration_list compound_statement %d\n",i++); }
	| declaration_specifiers declarator compound_statement								{ printf("function_definition/declaration_specifiers declarator compound_statement %d\n",i++); }
	| declarator declaration_list compound_statement									{ printf("function_definition/declarator declaration_list compound_statement %d\n",i++); }
	| declarator compound_statement														{ printf("function_definition/declarator compound_statement %d\n",i++); }
	;

%%
extern int column;
void yyerror(char *s) {   fprintf(stderr, "the error at %d : %s and i = %d\n",column,s,i);}
int main(void) {  yyparse();   }