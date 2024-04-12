#ifndef INTERPRETER_H
#define INTERPRETER_H

#include <iostream>
#include <fstream>

class Interpreter {
    private: 
        char current_char_;
        std::ifstream & input_;
    public:
        Interpreter(std::ifstream & input);
        ~Interpreter();
        void NextChar();
        int Expression();
        int Term();
        int Factor();
        void ProcessData();
};

#endif // INTERPRETER_H