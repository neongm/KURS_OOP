#pragma once
#include <vector>
#include <string>

class variable_size_struct
{
private:
    std::vector<std::string> additional_load;
    std::string single_load = "�����-������, ����������� �������������� ������� ����������� ��������, ����������� � ����� ��������� ������������. ��������� ��������� ���������, ������ �� ������ ��������������� ���� ����� � ��������� � ������� ������� �� ���� ����� 1812 ����, ���������� ��� ��������";

public:
    void set_load(size_t _size);
    variable_size_struct();
    variable_size_struct(size_t _size = 4);
};