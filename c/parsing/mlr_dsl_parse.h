#ifndef MLR_DSL_PARSE_H
#define MLR_DSL_PARSE_H

#define MD_TOKEN_SEMICOLON              1
#define MD_TOKEN_RETURN                 2
#define MD_TOKEN_FULL_SREC              3
#define MD_TOKEN_FULL_OOSVAR            4
#define MD_TOKEN_SUBR_CALL              5
#define MD_TOKEN_BREAK                  6
#define MD_TOKEN_CONTINUE               7
#define MD_TOKEN_FUNC_DEF               8
#define MD_TOKEN_NON_SIGIL_NAME         9
#define MD_TOKEN_LPAREN                10
#define MD_TOKEN_RPAREN                11
#define MD_TOKEN_LBRACE                12
#define MD_TOKEN_RBRACE                13
#define MD_TOKEN_COLON                 14
#define MD_TOKEN_SUBR_DEF              15
#define MD_TOKEN_COMMA                 16
#define MD_TOKEN_VAR                   17
#define MD_TOKEN_NUMERIC               18
#define MD_TOKEN_INT                   19
#define MD_TOKEN_FLOAT                 20
#define MD_TOKEN_STRING                21
#define MD_TOKEN_BOOLEAN               22
#define MD_TOKEN_MAP                   23
#define MD_TOKEN_BEGIN                 24
#define MD_TOKEN_END                   25
#define MD_TOKEN_WHILE                 26
#define MD_TOKEN_DO                    27
#define MD_TOKEN_FOR                   28
#define MD_TOKEN_IN                    29
#define MD_TOKEN_IF                    30
#define MD_TOKEN_ELIF                  31
#define MD_TOKEN_ELSE                  32
#define MD_TOKEN_FILTER                33
#define MD_TOKEN_ASSIGN                34
#define MD_TOKEN_DOLLAR_SIGN           35
#define MD_TOKEN_LEFT_BRACKET          36
#define MD_TOKEN_RIGHT_BRACKET         37
#define MD_TOKEN_LOGICAL_OR_EQUALS     38
#define MD_TOKEN_LOGICAL_XOR_EQUALS    39
#define MD_TOKEN_LOGICAL_AND_EQUALS    40
#define MD_TOKEN_BITWISE_OR_EQUALS     41
#define MD_TOKEN_BITWISE_XOR_EQUALS    42
#define MD_TOKEN_BITWISE_AND_EQUALS    43
#define MD_TOKEN_BITWISE_LSH_EQUALS    44
#define MD_TOKEN_BITWISE_RSH_EQUALS    45
#define MD_TOKEN_PLUS_EQUALS           46
#define MD_TOKEN_MINUS_EQUALS          47
#define MD_TOKEN_DOT_EQUALS            48
#define MD_TOKEN_TIMES_EQUALS          49
#define MD_TOKEN_DIVIDE_EQUALS         50
#define MD_TOKEN_INT_DIVIDE_EQUALS     51
#define MD_TOKEN_OPLUS_EQUALS          52
#define MD_TOKEN_OMINUS_EQUALS         53
#define MD_TOKEN_OTIMES_EQUALS         54
#define MD_TOKEN_ODIVIDE_EQUALS        55
#define MD_TOKEN_INT_ODIVIDE_EQUALS    56
#define MD_TOKEN_MOD_EQUALS            57
#define MD_TOKEN_POW_EQUALS            58
#define MD_TOKEN_OINT_DIVIDE_EQUALS    59
#define MD_TOKEN_OMOD_EQUALS           60
#define MD_TOKEN_OPOW_EQUALS           61
#define MD_TOKEN_UNSET                 62
#define MD_TOKEN_ALL                   63
#define MD_TOKEN_TEE                   64
#define MD_TOKEN_GT                    65
#define MD_TOKEN_BITWISE_RSH           66
#define MD_TOKEN_BITWISE_OR            67
#define MD_TOKEN_EMITF                 68
#define MD_TOKEN_EMITP                 69
#define MD_TOKEN_EMIT                  70
#define MD_TOKEN_DUMP                  71
#define MD_TOKEN_EDUMP                 72
#define MD_TOKEN_PRINT                 73
#define MD_TOKEN_EPRINT                74
#define MD_TOKEN_PRINTN                75
#define MD_TOKEN_EPRINTN               76
#define MD_TOKEN_STDOUT                77
#define MD_TOKEN_STDERR                78
#define MD_TOKEN_QUESTION_MARK         79
#define MD_TOKEN_LOGICAL_OR            80
#define MD_TOKEN_LOGICAL_XOR           81
#define MD_TOKEN_LOGICAL_AND           82
#define MD_TOKEN_MATCHES               83
#define MD_TOKEN_DOES_NOT_MATCH        84
#define MD_TOKEN_EQ                    85
#define MD_TOKEN_NE                    86
#define MD_TOKEN_GE                    87
#define MD_TOKEN_LT                    88
#define MD_TOKEN_LE                    89
#define MD_TOKEN_BITWISE_XOR           90
#define MD_TOKEN_BITWISE_AND           91
#define MD_TOKEN_BITWISE_LSH           92
#define MD_TOKEN_PLUS                  93
#define MD_TOKEN_MINUS                 94
#define MD_TOKEN_OPLUS                 95
#define MD_TOKEN_OMINUS                96
#define MD_TOKEN_DOT                   97
#define MD_TOKEN_TIMES                 98
#define MD_TOKEN_DIVIDE                99
#define MD_TOKEN_INT_DIVIDE            100
#define MD_TOKEN_MOD                   101
#define MD_TOKEN_OTIMES                102
#define MD_TOKEN_ODIVIDE               103
#define MD_TOKEN_INT_ODIVIDE           104
#define MD_TOKEN_LOGICAL_NOT           105
#define MD_TOKEN_BITWISE_NOT           106
#define MD_TOKEN_POW                   107
#define MD_TOKEN_FIELD_NAME            108
#define MD_TOKEN_BRACED_FIELD_NAME     109
#define MD_TOKEN_UNBRACED_OOSVAR_NAME  110
#define MD_TOKEN_BRACED_OOSVAR_NAME    111
#define MD_TOKEN_AT_SIGN               112
#define MD_TOKEN_NUMBER                113
#define MD_TOKEN_TRUE                  114
#define MD_TOKEN_FALSE                 115
#define MD_TOKEN_REGEXI                116
#define MD_TOKEN_CONTEXT_VARIABLE      117
#define MD_TOKEN_ENV                   118

#endif // MLR_DSL_PARSE_H