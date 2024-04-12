#include "../include/operations.h"

std::unordered_map<char, std::function<void(int&, int)>> operations = {
    {'+', [](int& val, int next_term) { val += next_term; }},
    {'-', [](int& val, int next_term) { val -= next_term; }},
    {'*', [](int& val, int next_factor) { val *= next_factor; }},
    {'/', [](int& val, int next_factor) { val /= next_factor; }}
};
