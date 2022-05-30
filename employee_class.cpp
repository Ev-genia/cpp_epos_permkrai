//
// Created by Евгения Костарева on 20.05.2022.
//

#include "employee_class.h"

employee_class::employee_class()
{
    m_position = "WRONG POSITION";
}

void employee_class::setPosition(std::string str)
{
    if (isCorrect(str)) m_position = str;
}

std::string employee_class::position()
{
    return (m_position);
}