#ifndef TOKENIZATION_H
#define TOKENIZATION_H


#include <string>

enum class TokenType
{
    BEGIN_OBJECT,
    END_OBJECT,
    BEGIN_ARRAY,
    END_ARRAY,
    COLON,
    COMMA,
    STRING,
    NUMBER,
    BOOLEAN,
    NUL,
    END
};

struct Token
{
    TokenType type;     // the type of a token
    std::string value;  // the value of a token
};


std::vector<Token> tokenization(std::string raw_str);

#endif