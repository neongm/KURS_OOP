#include "variable_size_struct.h"


void variable_size_struct::set_load(size_t _size)
{
    for (size_t i = 0; i < _size; i++) additional_load.push_back(single_load);
}

variable_size_struct::variable_size_struct()
{
    set_load(1);
}

variable_size_struct::variable_size_struct(size_t _size)
{
    set_load(_size);
}