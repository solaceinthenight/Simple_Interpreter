# Simple Interpreter

**CS 142B**
Language Processor Construction

Warmup Project #1

## EBNF Form

digit = "0" | "1" | ... | "9". \
number = digit {digit}. \
factor = number | "(" expression ")" . \
term = factor { ("*" | "/") factor}. \
expression = term {("+" | "-") term}. \
computation = expression "." \
The starting symbol of this grammar is computation.

### File Format Example
```1 +2 *(3+4) . 7 * 6 .```

## Instructions of Use

Please follow **Build** section instructions below before proceeding.

Run Executable: \
`./build/interpreter_main <file_name.txt>`

## Build

Generate build folder with build files \
`cmake --preset default`

Build target executable \
`cmake --build build`