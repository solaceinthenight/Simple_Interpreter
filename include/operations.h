#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <functional>
#include <unordered_map>

extern std::unordered_map<char, std::function<void(int&, int)>> operations;

#endif // OPERATIONS_H