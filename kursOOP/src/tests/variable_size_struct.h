#pragma once
#include <vector>
#include <string>

class variable_size_struct
{
private:
    std::vector<std::string> additional_load;
    std::string single_load = "–оман-эпопе€, описывающий представителей высшего двор€нского сослови€, оказавшихс€ в плену любовного треугольника. ѕережива€ множество испытаний, каждый из героев переосмысливает свою жизнь и отношени€ с другими геро€ми на фоне войны 1812 года, изменившей все общество";

public:
    void set_load(size_t _size);
    variable_size_struct();
    variable_size_struct(size_t _size = 4);
};