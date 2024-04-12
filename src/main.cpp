#include <iostream>
#include "../include/interpreter.h"

int main(int argc, char* argv[]) {
    if (argc <= 1) {
        std::cerr << "ERROR: Text file not found. \nFormat: interpret_main <text_file>" << std::endl;
        exit(1);
    }
    std::ifstream input(argv[1]);
    if (!input.is_open()) {
        std::cerr << "ERROR: Text file not found. Please check for any spelling errors." << std::endl;
        exit(1);
    }
    Interpreter interpreter(input);
    interpreter.ProcessData();
    input.close();
    return 0;
}