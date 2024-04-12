#include "../include/interpreter.h"
#include "../include/operations.h"

// class Interpreter
Interpreter::Interpreter(std::ifstream & input) : current_char_(' '), input_(input) {}

Interpreter::~Interpreter() {}

void Interpreter::NextChar() {
    while (std::isspace(input_.peek())) {
        input_.get();
    }
    input_ >> current_char_;
    // std::cout << "->" << current_char_ << "<-" << std::endl; // FOR DEBUG
}

int Interpreter::Expression() {
    int val = Term();
    while (current_char_ == '+' || current_char_ == '-') {
        char op = current_char_;
        NextChar();
        int next_term = Term();
        operations[op](val, next_term);
    }
    return val;
}

int Interpreter::Term() {
    int val = Factor();
    while (current_char_ == '*' || current_char_ == '/') {
        char op = current_char_;
        NextChar();
        int next_factor = Factor();
        operations[op](val, next_factor);
    }
    return val;
}

int Interpreter::Factor() {
    int val = 0; 
    if (isdigit(current_char_)) {
        while (isdigit(current_char_)) {
            val = val * 10 + (current_char_ - '0');
            NextChar();
        }
    } else if (current_char_ == '(') {
        NextChar();
        val = Expression();
        if (current_char_ == ')')
            NextChar();
    } else {
        std::cerr << "Error: Invalid input ->" << current_char_ << "<-" << std::endl;
        exit(1);
    }
    return val;
}

void Interpreter::ProcessData() {
    NextChar();
    while (current_char_ != '.') {
        int result = Expression();
        std::cout << result << std::endl;
        if (current_char_ == '\n') {
            break;
        }
        if (current_char_ != '.') {
            std::cerr << "Error: Invalid input ->" << current_char_ << "<-" << std::endl;
            exit(1);
        }
        NextChar();
    }
}
